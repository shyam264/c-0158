#include <iostream>
using namespace std;
class Add {
    int value;
public:
    Add(int v) : value(v) {}
    Add operator+(const Add& obj) {
        return Add(value + obj.value);
    }
    void display() {
        cout << "sum: " << value << endl;
    }
};
int main() {
	Add a1(10);
	Add a2(20);
    Add a3 = a1 + a2;
    
    a3.display(); 
    
    return 0;
}
