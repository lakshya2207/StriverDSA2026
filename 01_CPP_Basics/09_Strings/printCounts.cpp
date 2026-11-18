// Task 6
// Count:
// - vowels
// - consonants
// - digits
// - spaces


#include <iostream>
#include <cctype>
using namespace std;

void printCounts(string a){
    int v=0,c=0,d=0,s=0;
    for(int i =0;i<a.length();i++){
        if(a[i]==' '){
            s++;
        }else if ((a[i]>='0' )&& (a[i]<='9')){
            d++;
        }
        else if((tolower(a[i])=='a')||(tolower(a[i])=='e')||(tolower(a[i])=='i')||(tolower(a[i])=='o')||(tolower(a[i])=='u')){
            v++;
        }else{
            c++;
        }
    }
    cout << "vowels : " << v << "\n"; 
    cout << "consonants : " << c << "\n"; 
    cout << "digits : " << d << "\n"; 
    cout << "spaces : " << s << "\n"; 

}

int main() {
    printCounts("Lakshya The SHarma JI 143");
    return 0;
}