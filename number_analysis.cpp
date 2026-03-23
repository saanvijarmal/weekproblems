#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            if (arr[i] % 2 == 0)
                cout << arr[i] << " is Positive and Even\n";
            else
                cout << arr[i] << " is Positive and Odd\n";
        } else if (arr[i] < 0) {
            cout << arr[i] << " is Negative\n";
        } else {
            cout << arr[i] << " is Zero\n";
        }
    }

    if (arr[0] == arr[4])
        cout << "First and Last elements are Equal\n";
    else if (arr[0] > arr[4])
        cout << "First element is Greater\n";
    else
        cout << "Last element is Greater\n";

    return 0;
}