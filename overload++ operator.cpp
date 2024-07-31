#include <iostream>

using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor to initialize value
    Counter(int initialValue = 0) : value(initialValue) {}

    // Overload prefix ++ operator
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Overload postfix ++ operator
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    // Method to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value: ";
    c.display();

    ++c;
    cout << "After prefix ++: ";
    c.display();

    c++;
    cout << "After postfix ++: ";
    c.display();

    return 0;
}
