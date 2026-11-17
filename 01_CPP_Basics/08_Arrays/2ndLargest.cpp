// Task 8 — DSA Preparation
// Find the second largest element in an array.

// Do NOT use sorting.

#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
        int largest=arr[0];
        int secondLargest=-1;
        for(int i =1;i<arr.size();i++){
            if(arr[i]>largest){
                secondLargest=largest;
                largest=arr[i];
            }else if(arr[i]<largest && arr[i]>secondLargest){
                secondLargest=arr[i];
            }
        }
        return secondLargest;
        // return largest;
    }

int main() {
      vector<int> arr= {2,3,2,2,2,2,2,2,2,2,2};
      int num2 = getSecondLargest(arr);
    //   cout << "Largest among all is : " << num2 ;
      cout << "Second Largest among all is : " << num2 ;
    return 0;
}