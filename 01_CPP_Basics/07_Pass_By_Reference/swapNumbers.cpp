// void swapNumbers(int &a, int &b)

// Example:

// Before: 10 20
// After:  20 10

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main() {
    int a=100,b=200;
    cout << "Before swap : a,b = " << a <<" "<< b << '\n';
    swapNumbers(a,b);
    cout << "After swap : a,b = " << a <<" "<< b << '\n';
    return 0;
}
