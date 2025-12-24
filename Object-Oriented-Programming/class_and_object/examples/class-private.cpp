#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float marks;

public:
    string name;

    void setData(int r, float m) {
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
    Student s1;
    s1.name = "Fiona";
    s1.setData(5, 88.5);
    s1.display();

    return 0;
}
