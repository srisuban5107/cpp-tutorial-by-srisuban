#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    Student s[3];

    for(int i = 0; i < 3; i++) {
        cin >> s[i].roll >> s[i].name;
    }

    cout << "\nStudent List:\n";
    for(int i = 0; i < 3; i++) {
        cout << s[i].roll << " " << s[i].name << endl;
    }

    return 0;
}
