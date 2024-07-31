#include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int start;
    int end;
public:
    DivisibleByNine(int s, int e) : start(s), end(e) {}

    void findAndSum() {
        int sum = 0;
        cout << "Numbers divisible by 9 between " << start << " and " << end << " are:" << endl;
        for (int i = start; i <= end; i++) {
            if (i % 9 == 0) {
                cout << i << " ";
                sum += i;
            }
        }
        cout << endl << "Sum of these numbers is: " << sum << endl;
    }

    ~DivisibleByNine() {
        cout << "Destructor called. DivisibleByNine object is being deleted." << endl;
    }
};

int main() {
    DivisibleByNine calculator(100, 200);
    calculator.findAndSum();

    return 0;
}
