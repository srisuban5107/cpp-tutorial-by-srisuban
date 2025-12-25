#include <iostream>
using namespace std;

struct Student {
    int m1, m2, m3;
};

int main() {
    Student s;
    int total;

    cin >> s.m1 >> s.m2 >> s.m3;
    total = s.m1 + s.m2 + s.m3;

    cout << "Total = " << total << endl;
    cout << "Average = " << total / 3.0;

    return 0;
}
