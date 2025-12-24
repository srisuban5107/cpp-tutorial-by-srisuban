#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks;

    marks["Alice"] = 95;
    marks["Bob"] = 88;
    marks["Charlie"] = 92;

    cout << "Student Marks:\n";
    for(auto &pair : marks) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
