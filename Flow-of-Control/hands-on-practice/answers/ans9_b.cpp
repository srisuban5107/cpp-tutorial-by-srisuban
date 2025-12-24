#include <iostream>
using namespace std;

int main() {
    double x, sum = 0;
    int n;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter number of terms (n): ";
    cin >> n;

    double term = x; // First term is x^1 / 1
    for(int i = 1; i <= n; i++) {
        term = 1;
        // Calculate x^i
        for(int j = 1; j <= i; j++)
            term *= x;
        // Divide by i
        term /= i;
        sum += term;
    }

    cout << "Sum of the series = " << sum << endl;

    return 0;
}
