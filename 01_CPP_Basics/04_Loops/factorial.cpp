// Task 5
// Print the factorial of a number using a loop.

#include <iostream>
using namespace std;

int main(){
    int n ,factorial=1;
    cin>> n;
    for (int i=1;i<n+1;i++){
        factorial*=i;
    }
    cout << "factorial of " << n << " is "<< factorial ;


    return 1;
}