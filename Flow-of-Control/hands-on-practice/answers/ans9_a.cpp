#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 0;
    int terms = 6; // Up to x^6/6!

    cout << "Enter value of x: ";
    cin >> x;

    for(int i = 1; i <= terms; i++) {
        double term = 1;
        // Calculate x^i
        for(int j = 1; j <= i; j++)
            term *= x;
        // Divide by factorial
        term /= factorial(i);
        // Alternate sign
        if(i % 2 == 0)
            term = -term;
        // Add to sum
        sum += term;
    }

    cout << "Sum of the series = " << sum << endl;

    return 0;
}
