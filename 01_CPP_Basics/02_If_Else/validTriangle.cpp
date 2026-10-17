// Task 6 — Slightly Harder
// Take three sides of a triangle and determine whether the triangle is valid.
#include <iostream>
using namespace std;

int main (){
    int a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;
    
    if((a<=0)||(b<=0)||(c<=0)){
        cout << "Invalid";
    }else if(a==b+c){
        cout << "Invalid";
    }else if(b==a+c){
        cout << "Invalid";
    }else if(c==b+a){
        cout << "Invalid";
    }else{
        cout << "Valid";
    }

    return 0;
}