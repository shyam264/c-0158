#include <iostream>
using namespace std;
class AddAmount {
    int amount;
public:
    AddAmount() : amount(50) {}

    AddAmount(int add) : amount(50 + add) {}

    void display() {
        cout << amount << " ";
    }
};

int main() {
    AddAmount obj1;
    AddAmount obj2(30);
    
    obj1.display(); 
    obj2.display(); 
    
    return 0;
}
