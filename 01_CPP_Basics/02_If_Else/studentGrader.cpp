// Task 5
// Take marks and print:

// 90-100 -> A
// 80-89  -> B
// 70-79  -> C
// 60-69  -> D
// Below 60 -> F
#include <iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if((marks>=90)&(marks<=100)){
        cout << "A";
    }else if((marks>=80)&(marks<90)){
        cout << "B";
    }else if((marks>=70)&(marks<80)){
        cout << "C";
    }else if((marks>=60)&(marks<70)){
        cout << "D";
    }else{
        cout << "F";
    }

    return 0;
}