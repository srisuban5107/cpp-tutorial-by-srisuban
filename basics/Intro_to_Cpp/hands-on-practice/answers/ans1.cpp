#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3;
    int sum;
    float average;

    cout << "Enter Mark 1: ";
    cin >> m1;

    cout << "Enter Mark 2: ";
    cin >> m2;

    cout << "Enter Mark 3: ";
    cin >> m3;

    sum = m1 + m2 + m3;
    average = sum / 3.0;  // use 3.0 to get correct decimal average

    cout << "Total Marks = " << sum << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}
