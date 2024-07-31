#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, sum = 0, temp, digits = 0, digit;
    cout << "Enter a number: "; 
    cin >> number;

    temp = number;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = number;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == number) {
        cout << number << " is a Narcissistic number.\n";
    } else {
        cout << number << " is not a Narcissistic number.\n";
    }

    return 0;
}
