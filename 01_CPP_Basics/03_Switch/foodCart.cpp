#include <iostream>
#include <string>
using namespace std;

// Task 3 — Menu

// Create:

// 1. Pizza
// 2. Burger
// 3. Pasta
// 4. Exit

// Take the user's choice and print the selected item.


int main(){
     int s;
     cout << "Choose only one option : \n ";
     cout << "1. Pizza \n ";
     cout << "2. Pasta \n ";
     cout << "3. Burger \n ";
     cout << "0. Exit \n ";
     cin >> s;
     switch(s){
        case 1:
            cout << "Your Pizza will be ready in a while \n ";
            break;
        case 2:
            cout << "Your Pasta will be ready in a while \n ";
            break;
        case 3:
            cout << "Your Burger will be ready in a while \n ";
            break;
        case 0:
            cout << "You can exit now \n ";
            break; 
        default:
            cout << "Humse na ho paega \n ";
     }
    return 1;
}