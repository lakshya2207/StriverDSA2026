// Create:

// bool isPrime(int n)

#include <iostream>
using namespace std;

int isPrime(int n){
    int c=0;
    for (int i=1;i<n+1;i++){
        if(n%i==0){
            c++;
            // cout << "INCREMENTED ";
        }
    }
    if(c==2){
        return 1;
    }
    return 0;
}

int main() {
    cout << " isPrime(52) "<< isPrime(52) << "\n";
    cout << " isPrime(51) "<< isPrime(51) << "\n";
    cout << " isPrime(53) "<< isPrime(53) << "\n";
    cout << " isPrime(54) "<< isPrime(54) << "\n";
    cout << " isPrime(55) "<< isPrime(55) << "\n";
    cout << " isPrime(57) "<< isPrime(57) << "\n";
    cout << " isPrime(11) "<< isPrime(11) << "\n";
    cout << " isPrime(13) "<< isPrime(13) << "\n";
    cout << " isPrime(97) "<< isPrime(97) << "\n";
    cout << " isPrime(91) "<< isPrime(91) << "\n";
    return 0;
}