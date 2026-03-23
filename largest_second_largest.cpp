#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int digits[10];
    int index = 0;

    // Store digits in array
    while (number != 0 && index < 10) {
        digits[index] = number % 10;
        number /= 10;
        index++;
    }

    int largest = -1, secondLargest = -1;

    // Find largest and second largest
    for (int i = 0; i < index; i++) {
        if (digits[i] > largest) {
            secondLargest = largest;
            largest = digits[i];
        } else if (digits[i] > secondLargest && digits[i] != largest) {
            secondLargest = digits[i];
        }
    }

    cout << "Largest digit: " << largest << endl;
    cout << "Second Largest digit: " << secondLargest << endl;

    return 0;
}