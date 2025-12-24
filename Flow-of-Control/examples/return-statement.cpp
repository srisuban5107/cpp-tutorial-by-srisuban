#include <iostream>
using namespace std;

int sum(int a, int b) {
    if(a < 0 || b < 0) return 0; // early exit
    return a + b;
}

int main() {
    cout << "Sum of 5 and 7 = " << sum(5, 7) << endl;
    cout << "Sum of -2 and 5 = " << sum(-2, 5) << endl;
    return 0;
}
