#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Maximum int: " << numeric_limits<int>::max() << endl;
    cout << "Minimum int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum double: " << numeric_limits<double>::max() << endl;
    cout << "Minimum double: " << numeric_limits<double>::min() << endl;
    return 0;
}
