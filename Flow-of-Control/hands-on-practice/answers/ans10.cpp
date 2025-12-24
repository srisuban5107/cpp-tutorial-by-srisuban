#include <iostream>
using namespace std;

int main() {
    double x, sum = 1;  // start with 1
    int n;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of n: ";
    cin >> n;

    double term = 1; // term = x^0 initially
    for(int i = 1; i <= n; i++) {
        term *= x;    // term = x^i
        sum += term;  // add term to sum
    }

    cout << "Sum of the series = " << sum << endl;

    return 0;
}
