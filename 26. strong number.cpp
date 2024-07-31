#include <iostream>

int main() {
    int number, temp, digit, sum, factorial;
    std::cout << "Enter a number: ";
    std::cin >> number;

    sum = 0;
    temp = number;
    while (temp > 0) {
        digit = temp % 10;

        // Calculate factorial of the digit
        factorial = 1;
        for (int i = 1; i <= digit; ++i) {
            factorial *= i;
        }

        sum += factorial;
        temp /= 10;
    }

    if (sum == number) {
        std::cout << number << " is a Strong number.\n";
    } else {
        std::cout << number << " is not a Strong number.\n";
    }

    return 0;
}
