// Task 7
// Search for a number.

// Input:
// Array: 10 20 30 40 50
// Search: 30

// Output:
// Found at index 2

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& arr, int x) {
        // code here
        for(int i =0;i<arr.size();i++){
            if(x==arr[i]){
                return i;
            }
        }   
        return -1;
    }


int main() {
      vector<int> arr= {1,2,3,4,99,34,46,57,9,6};
      int ele=9;
      int position = search(arr,ele);
    cout << "position of "<< ele << " is at index : "<< position;
    return 0;
}