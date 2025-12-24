#include <iostream>
using namespace std;

void add(int a, int b) { // parameters
    cout << "Sum = " << a + b << endl;
}

int main() {
    add(5, 7);
    add(10, 20);
    return 0;
}
