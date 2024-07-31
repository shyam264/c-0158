#include <iostream>

using namespace std;

class A {
protected:
    int a;
h
public:
    A(int value) : a(value) {}
    void displayA() const {
        cout << "Value of a: " << a << endl;
    }
};

class B {
protected:
    int b;

public:
    B(int value) : b(value) {}
    void displayB() const {
        cout << "Value of b: " << b << endl;
    }
};

class C : public A, public B {
private:
    int c;

public:
    C(int valueA, int valueB, int valueC) : A(valueA), B(valueB), c(valueC) {}
    void displayC() const {
        cout << "Value of c: " << c << endl;
    }
    void displayAll() const {
        displayA();
        displayB();
        displayC();
    }
};

int main() {
    C obj(100, 200, 300);

    obj.displayAll();

    return 0;
}
