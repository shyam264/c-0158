#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int number;
public:
    // Constructor to initialize the number
    CubeCalculator(int num) : number(num) {}

    // Method to calculate and display the cube of numbers up to the given integer
    void displayCubes() {
        for (int i = 1; i <= number; i++) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }

    // Destructor
    ~CubeCalculator() {
        cout << "Destructor called. CubeCalculator object is being deleted." << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    CubeCalculator calculator(num);
    calculator.displayCubes();

    return 0;
}
