#include <iostream>
#include <string>
using namespace std;

// Inline function to check if a string is a palindrome
inline bool isPalindrome(const string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;

    cout << "Enter the string: ";
    cin >> input;

    // Check if the input string is a palindrome
    if (isPalindrome(input)) {
        cout << "THE GIVEN STRING IS PALINDROME";
    } else {
        cout << "THE GIVEN STRING IS NOT PALINDROME";
    }

    return 0;
}
