#include <iostream>
using namespace std;

int main() {
    int number, temp, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    temp = number;

    // Count digits
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    int digits[count];
    temp = number;

    // Store digits
    for (int i = 0; i < count; i++) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    // Print reverse
    cout << "Reversed number: ";
    for (int i = 0; i < count; i++) {
        cout << digits[i];
    }

    return 0;
}
