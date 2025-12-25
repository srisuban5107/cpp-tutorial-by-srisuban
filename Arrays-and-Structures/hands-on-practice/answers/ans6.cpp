#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
    int marks;
};

int main() {
    Student s;

    cout << "Enter roll, name, marks:\n";
    cin >> s.roll >> s.name >> s.marks;

    cout << "\nStudent Details:\n";
    cout << s.roll << " " << s.name << " " << s.marks;

    return 0;
}
