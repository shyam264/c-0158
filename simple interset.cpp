#include <iostream>
using namespace std;
int main() {
    double principal;
    int years;
    char isSenior;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the number of years: ";
    cin >> years;

    cout << "Is customer senior citizen (y/n): ";
    cin >> isSenior;

    double rateOfInterest = (isSenior == 'y' || isSenior == 'Y') ? 12.0 : 10.0;
    double interest = (principal * rateOfInterest * years) / 100.0;

    cout << "Interest: " << interest;

    return 0;
}
