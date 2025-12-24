#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    void setData(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << name << " - " << marks << endl;
    }
};

int main() {
    Student s[3];
    s[0].setData("Alice", 85);
    s[1].setData("Bob", 90);
    s[2].setData("Charlie", 95);

    for(int i=0; i<3; i++)
        s[i].display();

    return 0;
}
