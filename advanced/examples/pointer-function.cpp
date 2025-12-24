#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int) = add; // pointer to function
    cout << "Sum = " << funcPtr(5, 10) << endl;
    return 0;
}
