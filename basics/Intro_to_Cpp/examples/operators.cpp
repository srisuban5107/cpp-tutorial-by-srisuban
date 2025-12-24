#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;
    bool x = true, y = false;

    cout << "===== ARITHMETIC OPERATORS =====\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\n===== RELATIONAL OPERATORS =====\n";
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    cout << "\n===== LOGICAL OPERATORS =====\n";
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x     : " << (!x) << endl;

    cout << "\n===== ASSIGNMENT OPERATORS =====\n";
    int c = a;
    cout << "c = " << c << endl;
    c += b;
    cout << "c += b : " << c << endl;
    c -= b;
    cout << "c -= b : " << c << endl;
    c *= b;
    cout << "c *= b : " << c << endl;
    c /= b;
    cout << "c /= b : " << c << endl;

    cout << "\n===== INCREMENT / DECREMENT =====\n";
    int d = 5;
    cout << "d = " << d << endl;
    cout << "d++ = " << d++ << endl;
    cout << "After d++ : " << d << endl;
    cout << "++d = " << ++d << endl;
    cout << "d-- = " << d-- << endl;
    cout << "After d-- : " << d << endl;
    cout << "--d = " << --d << endl;

    cout << "\n===== BITWISE OPERATORS =====\n";
    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;
    cout << "~a     = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    cout << "\n===== CONDITIONAL (TERNARY) OPERATOR =====\n";
    int max = (a > b) ? a : b;
    cout << "Maximum value = " << max << endl;

    cout << "\n===== SIZEOF OPERATOR =====\n";
    cout << "Size of int    = " << sizeof(int) << " bytes\n";
    cout << "Size of float  = " << sizeof(float) << " bytes\n";
    cout << "Size of double = " << sizeof(double) << " bytes\n";
    cout << "Size of char   = " << sizeof(char) << " bytes\n";

    cout << "\n===== COMMA OPERATOR =====\n";
    int e;
    e = (a = 5, b = 7, a + b);
    cout << "Result using comma operator = " << e << endl;

    cout << "\n===== TYPE CASTING =====\n";
    float f = 10.5;
    int g = (int)f;
    cout << "Float value = " << f << endl;
    cout << "After type casting to int = " << g << endl;

    cout << "\n===== PROGRAM END =====\n";

    return 0;
}
