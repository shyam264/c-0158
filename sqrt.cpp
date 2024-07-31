#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double n;
        cout << "Enter a number: ";
    cin >> n;
        if (n < 0) {
        cout << " negative number cant have square root";
    } else {
        double sqrtResult = sqrt(n);
        cout << "the square root of number is:" << sqrtResult;
    }
    
    return 0;
}
