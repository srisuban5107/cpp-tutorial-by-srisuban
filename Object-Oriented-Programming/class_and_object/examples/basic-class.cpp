#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    string name;
    int roll;
    float marks;
};

int main() {
    Student s1;  // Object creation
    s1.name = "Alice";
    s1.roll = 1;
    s1.marks = 85.5;

    cout << "Student Details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
