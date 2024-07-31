#include <iostream>
using namespace std;

// Function to swap numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue function: a = " << a << ", b = " << b << endl;
}

// Function to swap numbers using call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;

    // Call by value
    cout << "Before swapByValue function call: a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    cout << "After swapByValue function call: a = " << a << ", b = " << b << endl;

    // Call by reference
    cout << "Before swapByReference function call: a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swapByReference function call: a = " << a << ", b = " << b << endl;

    return 0;
}
