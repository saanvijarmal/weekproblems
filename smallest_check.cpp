#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3;

    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    if (number1 < number2 && number1 < number3) {
        cout << "Is the first number the smallest? Yes";
    } else {
        cout << "Is the first number the smallest? No";
    }

    return 0;
}