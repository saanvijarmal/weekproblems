#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Not a natural number";
    } else {
        for (int i = 1; i <= number; i++) {
            if (i % 2 == 0) {
                cout << i << " is Even" << endl;
            } else {
                cout << i << " is Odd" << endl;
            }
        }
    }

    return 0;
}