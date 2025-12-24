#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(4, 6);
    cout << "Multiplication = " << result << endl;
    return 0;
}
