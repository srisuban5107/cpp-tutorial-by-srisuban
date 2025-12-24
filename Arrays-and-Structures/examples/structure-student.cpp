#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s1;
    cout << "Enter Name: ";
    getline(cin, s1.name);
    cout << "Enter Roll No: ";
    cin >> s1.roll;
    cout << "Enter Marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
