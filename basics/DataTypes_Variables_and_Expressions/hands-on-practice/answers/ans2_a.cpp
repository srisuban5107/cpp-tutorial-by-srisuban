#include <iostream>
using namespace std;

int main()
{
    float r, area, perimeter;
    const float pi = 3.14159;

    cout << "Enter the radius: ";
    cin >> r;

    area = (pi * r * r) / 4;
    perimeter = (pi * r) / 2 + 2 * r;

    cout << "Area of Quadrant = " << area << endl;
    cout << "Perimeter of Quadrant = " << perimeter << endl;

    return 0;
}
