// digitsReversal

#include<iostream>
using namespace std;

int main(){
    
    int n=0,c=0,ORG;
    cin >> n;
    ORG=n;
    // cout << n << " have ";
    while(n%10>0){
        c=c*10+n%10;
        n=n/10;

    }
    cout << c << " IS REVERSE OF "<< ORG;

    return 0;
}