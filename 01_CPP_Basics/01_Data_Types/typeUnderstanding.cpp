// Task 4 — typeid Understanding
// Answer without running the code:

// int a = 10;
// double b = 2.5;
// char c = 'A';
// bool d = true;

// What is the typeid of each variable?

// Also explain why:

// 5 / 2
// 5.0 / 2

// give different results.

#include <iostream>
#include <typeinfo> // Required header
using namespace std;

int main(){
    int a = 10;
    double b = 2.5;
    char c = 'A';
    bool d = true;
    cout << typeid(a).name()<< "\n";
    cout << typeid(b).name()<< "\n";
    cout << typeid(c).name()<< "\n";
    cout << typeid(d).name()<< "\n";
    // 5/2 will be float
    // and 5.0/2 will also be float
    cout<< "5/2 " << typeid(5/2).name()<< "\n";
    cout << "5.0/2 "<< typeid(5.0/2).name()<< "\n";

    return 0;
}