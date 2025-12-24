#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    // Constructor
    Student(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Charlie", 3, 95.0);
    s1.display();
    return 0;
}
