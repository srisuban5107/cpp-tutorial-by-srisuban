#include <iostream>
using namespace std;

struct Student {
    int roll;
    int marks[3];
};

int main() {
    Student s;
    int total = 0;

    cin >> s.roll;
    for(int i = 0; i < 3; i++) {
        cin >> s.marks[i];
        total += s.marks[i];
    }

    cout << "Total Marks = " << total;

    return 0;
}
