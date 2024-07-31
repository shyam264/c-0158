#include <iostream>
using namespace std;

class ReverseNumber {
private:
    int number;
public:
    ReverseNumber() : number(0) {}
    ReverseNumber(int num) : number(num) {}

    void displayReverse() {
        int reverse = 0, remainder, temp = number;
        while (temp != 0) {
            remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp /= 10;
        }
        cout << "Reverse of " << number << " is " << reverse << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    ReverseNumber reverse(num);
    reverse.displayReverse();

    return 0;
}
