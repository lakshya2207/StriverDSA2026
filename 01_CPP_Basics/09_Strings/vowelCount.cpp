// Task 3
// Count the number of vowels.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    string a;
    int c=0;
    cin>> a;
    for(int i=0;i<a.length();i++){
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')){
            c++;
        }
    }
    cout<< "No. of vowels are : " << c;

    return 0;
}