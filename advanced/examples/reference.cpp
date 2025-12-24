#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a; // reference variable

    cout << "a = " << a << ", ref = " << ref << endl;
    ref = 20;
    cout << "a = " << a << ", ref = " << ref << endl;

    return 0;
}
