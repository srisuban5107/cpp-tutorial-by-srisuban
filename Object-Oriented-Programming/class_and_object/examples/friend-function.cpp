#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) { width = w; }

    // Friend function declaration
    friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b) {
    cout << "Width of box = " << b.width << endl;
}

int main() {
    Box b1(10.5);
    printWidth(b1);
    return 0;
}
