// Task 1
// Take 5 integers into an array and print them.

#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << '\n'; 
    cout << '['; 
    for (int i=0;i<n;i++){
        cout << arr[i] ;
        if(i!=n-1){
            cout << ", " ;
        }
    }
    cout << ']'; 
    return 0;
}