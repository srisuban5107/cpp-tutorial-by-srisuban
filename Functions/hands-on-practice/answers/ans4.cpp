#include <iostream>
using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

double sumseries(double x, int n) {
    double sum = 0;
    int power = 1;
    int fact = 1;
    int sign = 1;

    for (int i = 1; i <= n; i++) {
        double term = 1;

        for (int j = 1; j <= power; j++)
            term *= x;

        term = sign * term / factorial(fact);
        sum += term;

        power++;
        fact += 2;
        sign = -sign;
    }
    return sum;
}

int main() {
    double x;
    int n;

    cout << "Enter x and n: ";
    cin >> x >> n;

    cout << "Sum of series = " << sumseries(x, n);
    return 0;
}
