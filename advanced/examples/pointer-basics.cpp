#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a; // pointer stores address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p points to: " << p << endl;
    cout << "Value via pointer: " << *p << endl;

    return 0;
}
