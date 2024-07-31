#include <iostream>
using namespace std;

class Series {
private:
    int limit;

public:
    // Function to get input from the user
    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }

    // Function to print the Fibonacci series up to the limit
    void show() {
        int a = 0, b = 1, next;
        if (limit <= 0) {
            cout << "Limit should be a positive integer." << endl;
            return;
        }
        
        cout << "Fibonacci series up to " << limit << " terms: ";
        for (int i = 1; i <= limit; ++i) {
            if (i == 1) {
                cout << a << " ";
                continue;
            }
            if (i == 2) {
                cout << b << " ";
                continue;
            }
            next = a + b;
            a = b;
            b = next;
            cout << next << " ";
        }
        cout << endl;
    }
};

int main() {
    Series series;
    series.input();
    series.show();
    return 0;
}
