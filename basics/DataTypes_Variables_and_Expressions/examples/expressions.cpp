#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    // Arithmetic expressions
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    // Relational expressions
    cout << "a > b  = " << (a > b) << endl;
    cout << "a == b = " << (a == b) << endl;

    // Logical expressions
    cout << "(a > 5 && b < 10) = " << (a > 5 && b < 10) << endl;
    cout << "(a < 5 || b < 10) = " << (a < 5 || b < 10) << endl;

    return 0;
}
