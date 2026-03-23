#include <iostream>
using namespace std;

int main() {
    long long number;

    cout << "Enter a number: ";
    cin >> number;

    int digits[20];
    int freq[10] = {0};
    int index = 0;

    // Store digits in array
    while (number != 0) {
        digits[index] = number % 10;
        number /= 10;
        index++;
    }

    // Count frequency
    for (int i = 0; i < index; i++) {
        freq[digits[i]]++;
    }

    // Display frequency
    cout << "\nDigit Frequencies:\n";
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << "Digit " << i << " occurs " << freq[i] << " times\n";
        }
    }

    return 0;
}