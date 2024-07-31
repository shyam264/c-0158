#include <iostream>

using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area
    virtual double calculateArea() const = 0;
    // Virtual function to calculate volume (to be implemented by derived class)
    virtual double calculateVolume() const = 0;
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}

    // Function to set dimensions
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Override the calculateArea function
    double calculateArea() const override {
        return length * width;
    }
};

// Derived class Cuboid from Rectangle and Shape
class Cuboid : public Rectangle {
private:
    double height;

public:
    // Constructor to initialize length, width, and height
    Cuboid(double l = 0, double w = 0, double h = 0) : Rectangle(l, w), height(h) {}

    // Function to set height
    void setHeight(double h) {
        height = h;
    }

    // Override the calculateVolume function
    double calculateVolume() const override {
        return calculateArea() * height;
    }

    // Function to display dimensions and volume
    void display() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area of Rectangle Base: " << calculateArea() << endl;
        cout << "Volume of Cuboid: " << calculateVolume() << endl;
    }
};

int main() {
    double length, width, height;

    // Input dimensions
    cout << "Enter length, width, and height of the cuboid: ";
    cin >> length >> width >> height;

    // Create a Cuboid object
    Cuboid cuboid(length, width, height);

    // Display the details
    cuboid.display();

    return 0;
}
