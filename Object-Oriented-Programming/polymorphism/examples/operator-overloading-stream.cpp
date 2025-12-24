#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Overload << operator
    friend ostream& operator<<(ostream &out, const Student &s) {
        out << "Name: " << s.name << ", Roll: " << s.roll;
        return out;
    }
};

int main() {
    Student s1("Alice", 1);
    cout << s1 << endl; // Calls overloaded <<
    return 0;
}
