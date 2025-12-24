#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of ints: " << add(5, 10) << endl;
    cout << "Sum of doubles: " << add(2.5, 3.7) << endl;
    return 0;
}
