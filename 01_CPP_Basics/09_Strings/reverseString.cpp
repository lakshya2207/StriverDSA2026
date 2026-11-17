// Task 4
// Reverse a string.

#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;

    for(int i=0;i<a.length()/2;i++){
        int temp= a[i];
        a[i]=a[a.length()-1-i];
        a[a.length()-1-i]=temp;

    }

    cout << a;
    return 0;
}