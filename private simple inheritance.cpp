#include <iostream>

using namespace std;

class A {
protected:
    int x;

public:
    void setX(int value) {
        x = value;
    }
};

class B : private A {
public:
    void setXInB(int value) {
        setX(value); // Using the base class method to set x
    }

    void displayX() {
        cout << "Here x is the protected data member of class A, class A is inherited privately to class B. ";
        cout << "In private inheritance only protected data member and member functions can be accessed by the derived class." << endl;
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    B obj;
    int value;

    cout << "Enter value of x: ";
    cin >> value;

    obj.setXInB(value);
    obj.displayX();

    return 0;
}
