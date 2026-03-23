#include <iostream>
using namespace std;

int main() {
    double salary, bonus = 0;
    int years;

    cout << "Enter salary and years of service: ";
    cin >> salary >> years;

    if (years > 5) {
        bonus = salary * 0.05;
    }

    cout << "The bonus amount is " << bonus;

    return 0;
}