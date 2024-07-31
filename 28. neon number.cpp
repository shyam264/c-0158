#include <iostream>
using namespace std;

int main() {
    int number, square, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> number;

    square = number * number;
    while (square > 0) {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }

    if (sum == number) {
        cout << number << " is a Neon number.\n";
    } else {
        cout << number << " is not a Neon number.\n";
    }

    return 0;
}
