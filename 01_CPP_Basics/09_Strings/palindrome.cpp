// Task 5
// Check whether a string is a palindrome.

// Examples:
// madam -> palindrome
// hello -> not palindrome


#include <iostream>
using namespace std;

string reverseString(string& a) {
    
    for(int i=0;i<a.length()/2;i++){
        int temp= a[i];
        a[i]=a[a.length()-1-i];
        a[a.length()-1-i]=temp;
    }
    return a;
}

int main() {
    string str,dup;
    cin >> str;
    dup=str;
    if(str==reverseString(dup)){
        cout << "palindrome";
    }else{
        cout << "not a palindrome";
    }

    return 0;
}