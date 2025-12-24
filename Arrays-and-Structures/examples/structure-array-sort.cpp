#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s[3] = {{"Alice", 1, 88}, {"Bob", 2, 75}, {"Charlie", 3, 92}};

    // Sort by marks descending
    for(int i=0; i<3-1; i++) {
        for(int j=i+1; j<3; j++) {
            if(s[i].marks < s[j].marks) {
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "Students sorted by marks:" << endl;
    for(int i=0; i<3; i++)
        cout << s[i].name << " - " << s[i].marks << endl;

    return 0;
}
