#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
        cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int gcdResult = gcd(num1, num2);
    cout << "GCD of numbers:" << gcdResult;
    int lcmResult = lcm(num1, num2);
    cout << "\nLCM of numbers:" << lcmResult;
    return 0;
}
