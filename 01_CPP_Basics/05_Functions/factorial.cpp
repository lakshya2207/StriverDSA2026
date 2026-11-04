// Create:

// int factorial(int n)

#include <iostream>
using namespace std;

int factorial(int n){
    int factorial=1;
    for (int i=1;i<n+1;i++){
        factorial*=i;
    }

    return factorial;
}

int main() {
    int fact = factorial(5);
    cout << "factorial of 5 is " << fact;
    return 0;
}