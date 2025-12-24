#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcdValue = gcd(num1, num2);
    int lcmValue = (num1 * num2) / gcdValue;

    cout << "GCD of " << num1 << " and " << num2 << " = " << gcdValue << endl;
    cout << "LCM of " << num1 << " and " << num2 << " = " << lcmValue << endl;

    return 0;
}
