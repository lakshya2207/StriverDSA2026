// Task 7
// Print the multiplication table of a number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1;i<11;i++){
        cout << n << " x " << i << " = " << i*n << "\n";
    }

    return 1;
}