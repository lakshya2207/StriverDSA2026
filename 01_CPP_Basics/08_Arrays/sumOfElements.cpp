// Task 2
// Find the sum of all elements.

#include <iostream>
using namespace std;

int arraySum(int arr[], int size) {
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int result = arraySum(arr,10);
    cout << " sum of [20,30,5,6,7,334,22,5] : " << result;
    return 0;
}