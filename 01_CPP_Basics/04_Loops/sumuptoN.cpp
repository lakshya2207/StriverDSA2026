// Task 4
// Print the sum of numbers from 1 to N.

#include<iostream>
using namespace std;

int main(){
    int n ,sum=0;
    cin>> n;
    for (int i=1;i<n+1;i++){
        sum+=i;
    }
    cout << "sum upto " << n << " is "<< sum ;


    return 1;
}