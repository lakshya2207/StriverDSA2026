#include <iostream>
using namespace std;

// Task 2 — Days

// Input:
// 3

// Output:
// Wednesday

int main (){

    int n;
    cin >> n;
    switch (n%7){
        case 1:
         cout << "Monday";
         break;
        case 2:
         cout << "Tuesday";
         break;
        case 3:
         cout << "Wednesday";
        break;
        case 4:
         cout << "Thrusday";
         break;
        case 5:
         cout << "Friday";
         break;
        case 6:
         cout << "Saturday";
         break;
        case 0:
         cout << "Sunday";
         break;
        default:
            cout << "Idk what you're tryinh to do man";
        
    }
    return 0;
}