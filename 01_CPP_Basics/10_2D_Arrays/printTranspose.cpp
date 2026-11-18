// Task 1
// Take a 3 x 3 matrix and print it transposing.

#include <iostream>
using namespace std;

int main() {
    int n=3;
    int matrix[n][n];

    // input
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            cin >> matrix[i][j];
        }
    }
    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}