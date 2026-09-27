#include <iostream>
using namespace std;

// Task 2
// Take temperature in Celsius and convert it to Fahrenheit.
// °F = °C × 9/5 + 32

int main(){
    float celsius,fahrenheit;
    cin >> celsius;     
    fahrenheit = celsius * 9/5 +32;

    cout <<celsius <<"° celcious is " << fahrenheit <<"° fahrenheit"; 

    return 0;
}