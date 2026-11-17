
// Count how many numbers are even and odd.

#include<iostream>
#include<vector>
using namespace std;

 pair<int, int> countOddEven(vector<int> &arr) {
        // code here
     int even=0,odd=0;
     int n = arr.size();
     
     for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
     }
     return {odd,even};
     
    }

int main(){
   vector<int> arr= {1, 2, 3, 2,2,2,2,2,2,2,2,2,2,2,2,1,7,7,7,7,77,7,7,77,7,7,7,7,77,74, 5,6};
    pair<int,int> ans= countOddEven(arr);

    cout << "Odd numbers: " << ans.first << endl;
    cout << "Even numbers: " << ans.second << endl;

    return 0;
}