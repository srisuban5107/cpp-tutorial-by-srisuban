#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    // Default constructor
    Student() {
        name = "Unknown";
        roll = 0;
        marks = 0.0;
    }

    // Parameterized constructor
    Student(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;  // Calls default constructor
    Student s2("Alice", 1, 95.5); // Calls parameterized constructor

    s1.display();
    s2.display();

    return 0;
}
