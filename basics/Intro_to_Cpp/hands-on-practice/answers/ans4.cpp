/*Compile-time Error
In the statement:
int h = 10; w = 12;
Variable w is not declared.

In C++, each variable must be declared with a data type.
Because of this, the compiler cannot compile the program.
Hence, it is a compile-time error.*/

#include <iostream>
using namespace std;

int main()
{
    int h = 10, w = 12;
    cout << "Area of rectangle " << h * w;
    return 0;
}
