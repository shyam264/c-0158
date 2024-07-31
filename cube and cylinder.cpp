#include <iostream>
using namespace std;
class Volume {
public:
    Volume(int side) {
        cout << "Cube Volume: " << side * side * side << endl;
    }
    Volume(float radius, float height) {
        cout << "Cylinder Volume: " << 3.14 * radius * radius * height << endl;
    }
};
int main() {
    Volume cube(3); 
    Volume cylinder(3.0f, 5.0f); 
    
    return 0;
}

