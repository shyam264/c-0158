#include <iostream>
using namespace std;

class TrianglePattern {
private:
    int rows;
public:
    TrianglePattern() : rows(0) {}
    TrianglePattern(int r) : rows(r) {}

    void displayPattern() {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    TrianglePattern pattern(rows);
    pattern.displayPattern();

    return 0;
}
