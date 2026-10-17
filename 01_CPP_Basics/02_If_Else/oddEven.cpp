// Task 2
// Check whether a number is:
// - even
// - odd

#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    cout << "Even : "<< (number%2==0) << "\n";
    cout << "Odd : "<< (number%2!=0) << "\n";
    return 0;
}