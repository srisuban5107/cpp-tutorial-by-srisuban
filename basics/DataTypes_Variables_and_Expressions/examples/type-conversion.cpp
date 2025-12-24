#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 3.5;

    // Implicit type conversion
    float result1 = a + b;

    // Explicit type casting
    int result2 = (int)b;

    cout << "Implicit conversion (a + b) = " << result1 << endl;
    cout << "Explicit conversion (int)b = " << result2 << endl;

    return 0;
}
