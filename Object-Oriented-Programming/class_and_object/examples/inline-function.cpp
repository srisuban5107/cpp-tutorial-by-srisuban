#include <iostream>
using namespace std;

class Circle {
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    inline double area() {  // Inline function
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c;
    c.setRadius(5);
    cout << "Area of circle = " << c.area() << endl;
    return 0;
}
