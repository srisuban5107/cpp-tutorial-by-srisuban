#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int roll;
    void displayStudent() {
        displayPerson();
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 16;
    s1.roll = 101;

    s1.displayStudent();

    return 0;
}
