#include <iostream>
using namespace std;

void greet(string name = "Student") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();            // uses default
    greet("Srisuban");  // passes argument
    return 0;
}
