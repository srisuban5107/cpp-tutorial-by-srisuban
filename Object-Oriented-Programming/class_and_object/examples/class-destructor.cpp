#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // Constructor
    Student(string n) {
        name = n;
        cout << name << " object created." << endl;
    }

    // Destructor
    ~Student() {
        cout << name << " object destroyed." << endl;
    }
};

int main() {
    Student s1("David");
    Student s2("Eva");

    return 0;
}
