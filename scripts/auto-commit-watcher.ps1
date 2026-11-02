# Auto-commit watcher: while this repo is open in VS Code, periodically checks for
# uncommitted changes and, if found, asks Groq for a commit message and pushes.
# Started by .vscode/tasks.json (runOn: folderOpen) and exits on its own once no
# VS Code window has this folder open anymore.

param(
    [int]$IntervalSeconds = 3600
)

$RepoRoot = (Resolve-Path "$PSScriptRoot\..").Path
Set-Location $RepoRoot

$LogFile = Join-Path $RepoRoot "scripts\auto-commit-watcher.log"

function Write-Log($msg) {
    $line = "[$(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')] $msg"
    Add-Content -Path $LogFile -Value $line
}

function Test-VSCodeOpenHere {
    $folderLeaf = Split-Path $RepoRoot -Leaf
    $procs = Get-CimInstance Win32_Process -Filter "Name = 'Code.exe'" -ErrorAction SilentlyContinue
    foreach ($p in $procs) {
        if ($p.CommandLine -and $p.CommandLine -like "*$folderLeaf*") {
            return $true
        }
    }
    return $false
}

function Get-GroqCommitMessage($diffText) {
    $apiKey = $env:GROQ_API_KEY
    if (-not $apiKey) {
        Write-Log "GROQ_API_KEY not set; falling back to generic commit message."
        return $null
    }

    $truncated = $diffText
    if ($truncated.Length -gt 12000) {
        $truncated = $truncated.Substring(0, 12000) + "`n...(truncated)"
    }

    $body = @{
        model    = "llama-3.1-8b-instant"
        messages = @(
            @{
                role    = "system"
                content = "You write concise git commit messages. Reply with ONLY the commit message text, one short summary line (max 72 chars), no quotes, no markdown, no explanation."
            },
            @{
                role    = "user"
                content = "Write a commit message for this diff:`n`n$truncated"
            }
        )
        temperature = 0.3
        max_tokens  = 60
    } | ConvertTo-Json -Depth 5

    try {
        $resp = Invoke-RestMethod -Uri "https://api.groq.com/openai/v1/chat/completions" `
            -Method Post `
            -Headers @{ "Authorization" = "Bearer $apiKey"; "Content-Type" = "application/json" } `
            -Body $body `
            -TimeoutSec 30

        $msg = $resp.choices[0].message.content.Trim()
        $msg = $msg -replace '^"|"$', ''
        if ($msg.Length -gt 0) { return $msg }
    } catch {
        Write-Log "Groq API call failed: $($_.Exception.Message)"
    }
    return $null
}

function Invoke-CommitAndPush {
    $status = git status --porcelain
    if (-not $status) { return }

    Write-Log "Detected changes, preparing commit."
    $diff = git diff HEAD
    if (-not $diff) { $diff = git diff --cached }

    $commitMessage = Get-GroqCommitMessage $diff
    if (-not $commitMessage) {
        $files = ($status -split "`n" | ForEach-Object { ($_ -replace '^...', '').Trim() }) -join ", "
        $commitMessage = "Auto-commit: update $files"
    }

    git add -A
    git commit -m "$commitMessage" | Out-Null
    $pushResult = git push 2>&1
    Write-Log "Committed with message: '$commitMessage'. Push output: $pushResult"
}

Write-Log "Watcher started (interval ${IntervalSeconds}s)."

while ($true) {
    if (-not (Test-VSCodeOpenHere)) {
        Write-Log "VS Code no longer has this folder open. Exiting watcher."
        break
    }

    try {
        Invoke-CommitAndPush
    } catch {
        Write-Log "Error during commit/push cycle: $($_.Exception.Message)"
    }

    Start-Sleep -Seconds $IntervalSeconds
}
