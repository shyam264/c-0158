#include <iostream>
using namespace std;

class SeriesSum {
private:
    int n;
    double sum;
public:
    SeriesSum() : n(0), sum(0.0) {}
    SeriesSum(int num) : n(num), sum(0.0) {}

    void calculateSum() {
        for (int i = 1; i <= n; i++) {
            sum += 1.0 / i;
        }
    }

    void displaySum() {
        cout << "Sum of the series up to " << n << " terms is " << sum << endl;
    }
};

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    SeriesSum series(num);
    series.calculateSum();
    series.displaySum();

    return 0;
}
