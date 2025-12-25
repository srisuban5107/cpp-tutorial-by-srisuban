#include <iostream>
using namespace std;

struct Student {
    int roll;
    int marks;
};

int main() {
    Student s[3];
    int maxIndex = 0;

    for(int i = 0; i < 3; i++)
        cin >> s[i].roll >> s[i].marks;

    for(int i = 1; i < 3; i++) {
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    cout << "Topper Roll No: " << s[maxIndex].roll;

    return 0;
}
