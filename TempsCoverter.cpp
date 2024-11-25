#include<iostream>
using namespace std;

int main(){
    int Cels;
    cout << "Hello! Welcome to the Celcius to Farenheit converter!" << endl;
    cout << "Please enter your value of Celcius to be converted: " << endl;
    cin >> Cels;
    int FarenH = (Cels * 9/5) + 32;
    cout << Cels << " degrees celcius is equivelent to " << FarenH << " degrees Farenheit! " << endl;
    return 0;
}