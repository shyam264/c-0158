#include <iostream>

using namespace std;

// Function to print an integer array
void printArray(const int arr[], int size) {
    cout << "Integer Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print a double array
void printArray(const double arr[], int size) {
    cout << "Double Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print a character array
void printArray(const char arr[], int size) {
    cout << "Character Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Integer array
    int intArray[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    // Double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    // Character array
    char charArray[] = {'A', 'B', 'C', 'D', 'E'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    // Print arrays
    printArray(intArray, intSize);
    printArray(doubleArray, doubleSize);
    printArray(charArray, charSize);

    return 0;
}
