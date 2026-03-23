#include <iostream>
using namespace std;

int main() {
    int number;
    int table[10];

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= 10; i++) {
        table[i - 1] = number * i;
    }

    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << table[i - 1] << endl;
    }

    return 0;
}