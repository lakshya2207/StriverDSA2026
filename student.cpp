#include <iostream>
using namespace std;
// Task 1
// Take a student's:
// - name
// - age
// - percentage
// - grade
// - whether they passed



int main (){
    // initialisation
    string userName;
    int userAge;
    float userPercentage;
    char userGrade;
    bool userResult;

    // input 
    cin >> userName;
    cin >> userAge;
    cin >> userPercentage;
    cin >> userGrade;
    cin >> userResult;
    
    // output
    cout << "Name : " << userName << "\n";
    cout << "Age : " << userAge << "\n";
    cout << "Percentage : "<< userPercentage << "\n";
    cout << "Grade : "<< userGrade << "\n";
    if(userResult){
        cout << "Result : Pass"<<  "\n";
    }else{
        cout << "Result : Fail"<<  "\n";
    }

    return 0;
}