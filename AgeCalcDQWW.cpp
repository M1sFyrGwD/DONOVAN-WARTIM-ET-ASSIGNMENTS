#include<iostream>
using namespace std;

int main(){
    int CurrentYear = 2024;
    int UserBirthYeAR;
    cout << "Please enter your year of birth: " << endl;
    cin >> UserBirthYeAR;
    int Age = CurrentYear - UserBirthYeAR;
    cout << "You are " << Age << " years old! " << endl;
    
    return 0;
}