#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.name = "Alice"; s.roll = 101;

    Student *ptr = &s;
    ptr->display(); // access member using pointer

    return 0;
}
