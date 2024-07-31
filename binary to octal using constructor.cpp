#include <iostream>
#include <string>
using namespace std;

class BinaryToOctal {
private:
    string binary;
public:
    BinaryToOctal(string bin) : binary(bin) {}

    void convertToOctal() {
        int decimal = 0;
        int base = 1;

        int length = binary.length();
        for (int i = length - 1; i >= 0; i--) {
            if (binary[i] == '1') {
                decimal += base;
            }
            base *= 2;
        }

        int octal[32];
        int index = 0;
        while (decimal > 0) {
            octal[index++] = decimal % 8;
            decimal /= 8;
        }

        cout << "Octal representation: ";
        for (int i = index - 1; i >= 0; i--) {
            cout << octal[i]; 
                        
        }
        cout << endl;
    }
};

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    BinaryToOctal converter(binary);
    converter.convertToOctal();

    return 0;
}