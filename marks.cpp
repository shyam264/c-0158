#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int regno;
    int mark1, mark2, mark3;
    float average;
    char grade;

public:
    // Function to read student details
    void input() {
        cout << "ENTER THE STUDENT NAME => ";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regno;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
    }

    // Function to calculate average and grade
    void calculate() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90) grade = 'S';
        else if (average > 80) grade = 'A';
        else if (average > 70) grade = 'B';
        else if (average > 60) grade = 'C';
        else if (average > 50) grade = 'D';
        else grade = 'F';
    }

    // Function to display student details
    void display() const {
        cout << "STUDENT NAME: " << name << endl;
        cout << "REGISTER NUMBER: " << regno << endl;
        cout << "MARK 1: " << mark1 << endl;
        cout << "MARK 2: " << mark2 << endl;
        cout << "MARK 3: " << mark3 << endl;
        cout << "AVERAGE SCORE IS: " << average << endl;
        cout << "GRADE: " << grade << " GRADE" << endl;
    }
};

int main() {
    int n;

    cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    cin >> n;

    if (n <= 0 || n > 10) {
        cout << "Number of students should be between 1 and 10." << endl;
        return 1;
    }

    Student students[10];

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].input();
        students[i].calculate();
    }

    for (int i = 0; i < n; ++i) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        students[i].display();
    }

    return 0;
}
