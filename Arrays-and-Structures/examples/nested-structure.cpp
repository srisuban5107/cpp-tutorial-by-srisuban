#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    string name;
    int roll;
    float marks;
    Date dob; // nested structure
};

int main() {
    Student s;
    cout << "Enter Name: ";
    getline(cin, s.name);
    cout << "Enter Roll No: ";
    cin >> s.roll;
    cout << "Enter Marks: ";
    cin >> s.marks;
    cout << "Enter Date of Birth (DD MM YYYY): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "DOB: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;

    return 0;
}
