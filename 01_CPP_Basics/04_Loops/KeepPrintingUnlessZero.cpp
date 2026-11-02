#include<iostream>
using namespace std;

// Task 3 — Do-While Loop
// Take a number from the user and keep asking for a new one until they enter 0.


int main(){
    int n;
    do{
        cin>>n;
        if(n!=0){
            cout << "number is "<< n << "\n";
        }else{
            cout << "0 found exiting...";
        }
    }while(n!=0);

    return 1;
}