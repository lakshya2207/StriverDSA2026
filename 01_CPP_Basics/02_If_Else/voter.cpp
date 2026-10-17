// Task 3
// Take a person's age and determine whether they can vote.

#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    cout << "Eligible to vote :  "<< (age>=18) << "\n";
    // cout << "Negative : "<< (age<0) << "\n";
    // cout << "Zero : "<< (age==0) << "\n";
    return 0;
}