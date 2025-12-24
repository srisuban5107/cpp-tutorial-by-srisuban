#include <iostream>
using namespace std;

inline int square(int x) { return x*x; }

int main() {
    const int a = 10; // constant variable
    cout << "Square of 5 = " << square(5) << endl;

    double d = 3.14;
    int i = (int)d; // type casting
    cout << "i = " << i << endl;

    return 0;
}
