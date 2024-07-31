#include <iostream>
using namespace std;
class Shape {
public:
    void area(int side) {
        cout << side * side << " ";
    }

    void area(int length, int breadth) {
        cout << length * breadth << " ";
    }
};

int main() {
    Shape shape;
    
    shape.area(7); 
    shape.area(7, 8); 
    
    return 0;
}
