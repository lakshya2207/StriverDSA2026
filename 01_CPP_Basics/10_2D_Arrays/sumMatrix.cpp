// Task 2
// Find the sum of all elements.

#include <iostream>
using namespace std;

int main() {
    int n=3;
    int matrix[n][n];

    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
            if(i==j){
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}


