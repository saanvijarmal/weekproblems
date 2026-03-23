#include <iostream>
using namespace std;

int main() {
    int ages[10];

    cout << "Enter ages of 10 students:\n";
    for (int i = 0; i < 10; i++) {
        cin >> ages[i];
    }

    for (int i = 0; i < 10; i++) {
        if (ages[i] < 0) {
            cout << "Invalid age\n";
        } else if (ages[i] >= 18) {
            cout << "The student with the age " << ages[i] << " can vote\n";
        } else {
            cout << "The student with the age " << ages[i] << " cannot vote\n";
        }
    }

    return 0;
}