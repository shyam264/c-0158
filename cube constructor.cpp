#include <iostream>

using namespace std;

class CubeCalculator {
private:
    int number;

public:
    // Default constructor
    CubeCalculator() : number(0) {}

    // Constructor that takes an integer
    CubeCalculator(int num) : number(num) {
        displayCubes();
    }

    // Method to display cubes from 1 up to 'number'
    void displayCubes() const {
        for (int i = 1; i <= number; ++i) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    // Create an object of CubeCalculator with the given integer
    CubeCalculator calculator(n);

    return 0;
}
