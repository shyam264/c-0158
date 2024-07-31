#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle() : length(0), breadth(0) {}

    Rectangle(int l, int b) : length(l), breadth(b) {}

    Rectangle(int side) : length(side), breadth(side) {}

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(3, 3);
    Rectangle rect3(3);

    cout << "Area: " << rect1.area() << endl; 
    cout << "Area: " << rect2.area() << endl; 
    cout << "Area: " << rect3.area() << endl; 
    
    return 0;
}
