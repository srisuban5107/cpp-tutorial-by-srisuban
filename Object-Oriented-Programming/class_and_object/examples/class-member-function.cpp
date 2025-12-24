#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Bob";
    s1.roll = 2;
    s1.marks = 90.0;

    s1.display(); // Call member function
    return 0;
}
