// Task 3
// Find the largest element.

#include <iostream>
using namespace std;

int main() {
    
    int max=-1,n=3;
    int matrix[n][n];
    
    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
            if(max<matrix[i][j]){
                max=matrix[i][j];
            }
        }
    }

    cout << "Max is : " << max;
    return 0;
}