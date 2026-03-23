#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0) {
        cout << "Is the number " << number << " divisible by 5? Yes";
    } else {
        cout << "Is the number " << number << " divisible by 5? No";
    }

    return 0;
}