#include <iostream>
using namespace std;

class Box {
    double width, height, depth;

public:
    // Constructor with no parameters
    Box() {
        width = height = depth = 0;
    }

    // Constructor with one parameter
    Box(double l) {
        width = height = depth = l;
    }

    // Constructor with three parameters
    Box(double w, double h, double d) {
        width = w; height = h; depth = d;
    }

    double volume() {
        return width * height * depth;
    }
};

int main() {
    Box b1;            // Calls default
    Box b2(5);         // Cube constructor
    Box b3(2, 3, 4);   // Box with dimensions

    cout << "Volume of b1: " << b1.volume() << endl;
    cout << "Volume of b2: " << b2.volume() << endl;
    cout << "Volume of b3: " << b3.volume() << endl;

    return 0;
}
