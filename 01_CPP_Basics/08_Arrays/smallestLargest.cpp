// Task 3
// Find the largest element.

// Task 4
// Find the smallest element.

#include <iostream>
using namespace std;

    int largest(int arr[],int n){
        int l=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        return l;
    }
int smallest(int arr[],int n){
    int s=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<s){
            s=arr[i];
        }
    }
    return s;
}


int main() {
    int arr[10]={10,2,3,4,5,6,7,8,9,100};
    int n=10;
    cout << "smallest : " << smallest(arr,n) << '\n';
    cout << "largest : " << largest(arr,n) << '\n';

    return 0;
}