#include <iostream>
using namespace std;

class Personal {
public:
    string name;
};

class Academic {
public:
    float marks;
};

class Student : public Personal, public Academic {
public:
    int roll;

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Charlie";
    s1.roll = 103;
    s1.marks = 92.5;

    s1.display();

    return 0;
}
