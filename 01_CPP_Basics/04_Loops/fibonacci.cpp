// Task 11
// Print the fibonacci series up to N terms.

#include<iostream>
using namespace std;

int fibonacci(int n){
    cout << "For n = " << n << " : \n";
    if (n<=0){
        cout << "invalid input ";
        return 0;
    }
    if (n==1){
        cout << 0;
    }
    int a=0,b=1,curr;
    cout << a << '\n';
    cout << b << '\n';
    for (int i=3;i<n+1;i++){
        curr = a+b;
        cout << curr << '\n';
        a=b;
        b=curr;
    }
    cout << "end \n";
    return 0;
}

int main(){
    fibonacci(2);
    fibonacci(5);
    fibonacci(7);
    fibonacci(10);
    return 0;
}