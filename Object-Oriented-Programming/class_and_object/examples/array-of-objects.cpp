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
    Student s[3];

    s[0].name = "Alice"; s[0].roll = 1;
    s[1].name = "Bob";   s[1].roll = 2;
    s[2].name = "Charlie"; s[2].roll = 3;

    for(int i=0; i<3; i++)
        s[i].display();

    return 0;
}
