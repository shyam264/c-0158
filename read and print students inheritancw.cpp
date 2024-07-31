#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int age;
    char gender;

public:
    void readBasicInfo() {
        cout << "Enter student's basic information:\n";
        cout << "Name?: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age?: ";
        cin >> age;
        cout << "Gender?: ";
        cin >> gender;
    }

    void printBasicInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class Result : public Student {
private:
    int totalMarks;
    char grade;

public:
    void readResultInfo() {
        cout << "Enter student's result information:\n";
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;
    }

    void printResultInfo() const {
        cout << "Total Marks: " << totalMarks << ", Percentage: " << (totalMarks / 5) << ", Grade: " << grade << endl;
    }
};

int main() {
    Result student;

    student.readBasicInfo();
    student.readResultInfo();

    student.printBasicInfo();
    student.printResultInfo();

    return 0;
}
