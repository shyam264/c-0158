#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int number;
public:
    CubeCalculator(int num) : number(num) {}

    void displayCubes() {
        for (int i = 1; i <= number; i++) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }

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
