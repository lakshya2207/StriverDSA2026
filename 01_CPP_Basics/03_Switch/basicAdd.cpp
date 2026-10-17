#include<iostream>
using namespace std;

// 3. SWITCH
// ---------

// Task 1 — Calculator

// Input:
// 10
// 5
// +

// Output:
// 15

int main(){
    int a ,b;
    char o;
    cin >> a;
    cin >> b;
    cin >> o;

    switch(o){
        case '+':
            cout << a << '+' <<b << " = "<<  a+b;
            break;
        case '-':
            cout << a << '-' <<b << " = "<<  a-b;
            break;  
        case '*':
            cout << a << '*' <<b << " = "<<  a*b;
            break;
        case '/':
            cout << a << '/' <<b << " = "<<  a/b;
            break;
        case '%':
            cout << a << '%' <<b << " = "<<  a%b;
            break;
        default :
            cout << "Idk what you're tryinh to do man";
    }
    return 1;
}