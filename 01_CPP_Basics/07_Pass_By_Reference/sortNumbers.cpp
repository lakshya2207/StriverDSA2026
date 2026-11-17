// void swapNumbers(int &a, int &b)

// Example:

// Before: 10 20
// After:  20 10

#include<iostream>
using namespace std;

void sortNums(int &a,int &b){
    if (a>b){
        int temp=a;
        a=b;
        b=temp;
    }

}
int main(){
    int a =20;
    int b=10;
    cout << "a : "<< a <<" and b : "<< b <<'\n';
    sortNums(a,b);
    cout << "a : "<< a <<" and b : "<< b <<'\n';

    return 0;
}

