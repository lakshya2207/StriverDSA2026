// Task 13 — Slightly Harder
// Find the sum of digits of a number, then repeat the process until the result is a single digit.

#include<iostream>
using namespace std;

int sumOfDgits(int n ){
    int sum =0;
    cout << n%10>0 << "\n";
    cout << n>=0 << "\n";
    while(n%10>0 && n>=0){
        sum =sum+n%10;
        n=n/10;
    }
    return sum ;
}

int main(){
    int n;
    cin >> n;
    cout <<sumOfDgits(n);

    return 0;
}