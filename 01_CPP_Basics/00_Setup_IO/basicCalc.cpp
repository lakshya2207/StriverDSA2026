#include <iostream>
using namespace std;

int main(){
    int x , y ;
    cin >> x >>y;
    cout << "addition " << x + y <<" \n";
    cout << "diffrence " << max(x-y,y-x) << "\n";
    cout << "multiplication " << x*y << "\n";
    cout << "quotient " << x/y << "\n";
    cout << "remainder " << x %y << "\n";
}