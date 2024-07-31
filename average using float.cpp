#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    // Modulo operation for floating-point numbers is not standard; however, you can implement a similar functionality
    cout << "Modulo: " << (num1, num2) << endl;

    return 0;
}
