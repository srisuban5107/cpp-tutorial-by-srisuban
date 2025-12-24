#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        roll = s.roll;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1("Alice", 1);
    Student s2 = s1; // Copy constructor called

    s1.display();
    s2.display();
    return 0;
}

