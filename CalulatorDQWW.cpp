#include<iostream>
using namespace std;

int main(){
    cout << "Welcome to the calculator!" << endl;
    int ValueA;
    cout << " Please enter your first value: " << endl;
    cin >> ValueA;
    int ValueB;
    cout << " Please enter your second value: " << endl;
    cin >> ValueB;
    char Operation;
    cout << " Please enter your desired operation: +, -, *, / " << endl;
    cin >> Operation; 

    switch (Operation){   
        case '+':
      cout << ValueA << " + " << ValueB << " = " << ValueA + ValueB;
      break;

    case '-':
      cout << ValueA << " - " << ValueB << " = " << ValueA - ValueB;
      break;

    case '*':
     cout << ValueA << " * " << ValueB << " = " << ValueA * ValueB;
      break;

    case '/':
      cout << ValueA << " / " << ValueB << " = " << ValueA / ValueB;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
    }

    return 0;
}