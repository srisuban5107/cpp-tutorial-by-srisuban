#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

float averageMarks(Student s[], int n) {
    float sum = 0;
    for(int i=0; i<n; i++)
        sum += s[i].marks;
    return sum / n;
}

int main() {
    Student s[2] = {{"Alice", 1, 80}, {"Bob", 2, 90}};

    cout << "Average Marks = " << averageMarks(s, 2) << endl;
    return 0;
}
