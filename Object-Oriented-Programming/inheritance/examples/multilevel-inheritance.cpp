#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int roll;
    void displayRoll() {
        cout << "Roll: " << roll << endl;
    }
};

// SubDerived class
class Exam : public Student {
public:
    float marks;
    void displayMarks() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Exam e1;
    e1.name = "Bob";
    e1.roll = 102;
    e1.marks = 89.5;

    e1.displayName();
    e1.displayRoll();
    e1.displayMarks();

    return 0;
}
