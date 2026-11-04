// Create:

// void change(int x)

// Inside the function:
// x = 100;

// Then:

// int a = 10;
// change(a);
// cout << a;

// Predict the output BEFORE running it.

// Then explain why.

void change(int x){
     x=100;
}

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "before change a : " << a << "\n";
    change(a);
    cout << "after change a : " << a << "\n";
    
    return 0;
}