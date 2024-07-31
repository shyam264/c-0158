#include <iostream>
#include <cmath>

class Circle {
protected:
    double radius;
public:
    void getRadius() {
        std::cout << "Enter the radius: ";
        std::cin >> radius;
    }
    double areaCircle() {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Circle {
protected:
    double length, breadth;
public:
    void getDimensions() {
        std::cout << "Enter the length: ";
        std::cin >> length;
        std::cout << "Enter the breadth: ";
        std::cin >> breadth;
    }
    double areaRectangle() {
        return length * breadth;
    }
};

class Cylinder : public Rectangle {
private:
    double height;
public:
    void getHeight() {
        std::cout << "Enter the height: ";
        std::cin >> height;
    }
    double volumeCylinder() {
        return M_PI * radius * radius * height;
    }
};

int main() {
    // Circle
    Circle circle;
    std::cout << "Getting the radius of the circle\n";
    circle.getRadius();
    std::cout << "The area = " << circle.areaCircle() << std::endl;

    // Rectangle
    Rectangle rectangle;
    std::cout << "\nGetting the length and breadth of the rectangle\n";
    rectangle.getDimensions();
    std::cout << "The area = " << rectangle.areaRectangle() << std::endl;

    // Cylinder
    Cylinder cylinder;
    std::cout << "\nGetting the radius and height of the cylinder\n";
    cylinder.getRadius();
    cylinder.getHeight();
    std::cout << "The volume of the cylinder is: " << cylinder.volumeCylinder() << std::endl;

    return 0;
}
