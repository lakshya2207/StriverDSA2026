#include<iostream>
using namespace std;

int reverseNumber(int n){
    
    int c=0,ORG;
    ORG=n;
    // cout << n << " have ";
    while(n>0){
        c=c*10+n%10;
        n=n/10;

    }
    // cout << c << " IS REVERSE OF "<< ORG;

    return c;
}

int main(){
    int num = 0;
    cin >> num ;
    if (num==reverseNumber(num)){
        cout << "palindrome \n";
        cout << reverseNumber(num);
        cout << " = b";
        cout << num;
    }else{
        cout << "not a palindrome \n";
        cout << reverseNumber(num);
        cout << " != ";
        cout << num;
    }
    return 1;
}