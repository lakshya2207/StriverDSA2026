
// Task 7
// Find the frequency of a particular character.

#include <iostream>
using namespace std;

int arrFreq(string s,char c){
    int n=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            n++;
        }
    }
    return n;
}

int main() {
    string str="Lakshyasharmathigreatbahubalioftheyear";
    cout << arrFreq(str,'a');
    return 0;
}