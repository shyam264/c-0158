#include <iostream>
using namespace std;

int main() {
    int number;

    // Asking the user for input
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    // Printing the multiplication table for the given number
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
