#include <iostream>
#include <cmath> // for M_PI

using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

class Square : public Shape {
private:
    double length;

public:
    Square(double l) : length(l) {}
    double area() const override {
        return length * length;
    }
};

int main() {
    double radius, length;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter the length of the square: ";
    cin >> length;

    Circle circle(radius);
    Square square(length);

    cout << "Area of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() << endl;

    return 0;
}
