#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter principal, rate, and time: ";
    cin >> principal >> rate >> time;

    double simpleInterest = (principal * rate * time) / 100;

    cout << "The Simple Interest is " << simpleInterest
         << " for Principal " << principal
         << ", Rate of Interest " << rate
         << " and Time " << time;

    return 0;
}