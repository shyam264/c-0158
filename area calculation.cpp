#include <iostream>
using namespace std;
class Area {
public:
    Area(float radius) {
        cout << 3.14 * radius * radius << " ";
    }
    Area(int length, int breadth) {
        cout << length * breadth << " ";
    }
    Area(float base, float height) {
        cout << 0.5 * base * height << " ";
    }
};
int main() {
    Area circle(3.0f); 
    Area rectangle(6, 7); 
    Area triangle(3, 2); 
    
    return 0;
}
