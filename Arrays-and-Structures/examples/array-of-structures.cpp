#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s[3];

    // Input
    for(int i=0; i<3; i++) {
        cin.ignore(); // to clear input buffer
        cout << "Enter Name: ";
        getline(cin, s[i].name);
        cout << "Enter Roll: ";
        cin >> s[i].roll;
        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    // Display
    cout << "\nStudent Details:" << endl;
    for(int i=0; i<3; i++) {
        cout << s[i].name << " | " << s[i].roll << " | " << s[i].marks << endl;
    }

    return 0;
}
