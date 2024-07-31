#include <iostream>

class Number {
public:
    // Constructor
    Number(int value = 0) : value(value) {}

    // Overload the + operator
    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    // Function to print the value
    void print() const {
        std::cout << value << std::endl;
    }

private:
    int value;
};

int main() {
    // Create two Number objects
    Number num1(54);
    Number num2(19);

    // Use the overloaded + operator
    Number sum = num1 + num2;

    // Print the result
    std::cout << "The sum is: ";
    sum.print();

    return 0;
}
