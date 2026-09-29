#include <iostream>
#include <numbers>
using namespace std;


// Task 3
// Take the radius of a circle and calculate:
// - diameter
// - circumference
// - area

int main(){
    float r;
    double pi_value = numbers::pi;
    cin >> r;

    cout << "Diameter : " <<r*2 << "\n";
    cout << "Circumference : " << 2 * pi_value *r << "\n";
    cout << "Area : " << r* pi_value *r << "\n";

    return 0;

}