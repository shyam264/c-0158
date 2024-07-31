#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;

public:
    Student() {
        name = "Unknown";
    }

    Student(string n) {
        name = n;
    }

    void printName() {
        cout << name << " ";
    }
};

int main() {
    Student student1("Jhon");
    Student student2;
    
    student1.printName();
    student2.printName(); 
    
    return 0;
}
