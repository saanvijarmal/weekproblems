#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    int quotient = number1 / number2;
    int remainder = number1 % number2;

    cout << "The Quotient is " << quotient 
         << " and Remainder is " << remainder 
         << " of two numbers " << number1 
         << " and " << number2;

    return 0;
}