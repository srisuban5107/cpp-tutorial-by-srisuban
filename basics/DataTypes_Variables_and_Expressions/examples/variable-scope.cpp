#include <iostream>
using namespace std;

int globalVar = 100;

int main()
{
    int localVar = 50;

    cout << "Global Variable = " << globalVar << endl;
    cout << "Local Variable  = " << localVar << endl;

    return 0;
}
