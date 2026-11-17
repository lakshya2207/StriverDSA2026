// Task 6
// Reverse an array.
    #include <iostream>
    #include <vector>
    using namespace std;
   
     void reverseArray(vector<int> &arr) {
        // code here
        int n =arr.size();
        for (int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
        }
    }
    
    int main() {
        vector<int> arr= {1,2,3,4,6};
        int n =arr.size();
    //    before sorting
    cout <<'[';
    for (int i=0 ;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<']' <<"\n";
    reverseArray(arr);
    //    after sorting
    cout <<'\n';
    cout <<'[';
    for (int i=0 ;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<']' <<"\n";
   
   return 0;
    }
   