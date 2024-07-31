#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 7 == 0 || number % 10 == 7) {
        std::cout << number << " is a Buzz number.\n";
    } else {
        std::cout << number << " is not a Buzz number.\n";
    }

    return 0;
}
