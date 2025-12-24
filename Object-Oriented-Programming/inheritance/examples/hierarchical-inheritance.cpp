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

// Derived class 1
class Student : public Person {
public:
    int roll;
    void displayRoll() { cout << "Roll: " << roll << endl; }
};

// Derived class 2
class Teacher : public Person {
public:
    string subject;
    void displaySubject() { cout << "Subject: " << subject << endl; }
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.roll = 101;

    Teacher t1;
    t1.name = "Mr. Bob";
    t1.subject = "Math";

    s1.displayName();
    s1.displayRoll();

    t1.displayName();
    t1.displaySubject();

    return 0;
}
