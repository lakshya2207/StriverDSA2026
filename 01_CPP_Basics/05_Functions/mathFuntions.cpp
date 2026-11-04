#include <iostream>
using namespace std;

// Create functions for:

// square()
// cube()
// isEven()
// maximum()

int square(int n){
    return n*n;
}
int cube(int n){
    return n*n*n;
}
int isEven(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}

int maximum(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}


int main() {

    int s=square(2);
    cout <<"square of 2 is "<< s <<"\n"; 
    
    int c=cube(2);
    cout <<"cube of 2 is "<< c <<"\n"; 
    
    int num = isEven(10);
    cout <<"10 is even : "<< num <<"\n"; 
    
    int max =  maximum(10,52);
    cout << "max of 10 and 52 is " << max;
    
    return 0;
}