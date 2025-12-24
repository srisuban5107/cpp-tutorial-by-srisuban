#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Academic : public Person {
public:
    float marks;
};

class Sports {
public:
    int score;
};

class Student : public Academic, public Sports {
public:
    int roll;

    void display() {
        cout << "Name: " << name << ", Roll: " << roll
             << ", Marks: " << marks << ", Score: " << score << endl;
    }
};

int main() {
    Student s1;
    s1.name = "David";
    s1.roll = 104;
    s1.marks = 88.5;
    s1.score = 50;

    s1.display();
    return 0;
}
