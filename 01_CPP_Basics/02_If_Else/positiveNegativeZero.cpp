// Task 1
// Take a number and determine whether it is:
// - positive
// - negative
// - zero


#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    cout << "Positive : "<< (number>0) << "\n";
    cout << "Negative : "<< (number<0) << "\n";
    cout << "Zero : "<< (number==0) << "\n";
    return 0;
}