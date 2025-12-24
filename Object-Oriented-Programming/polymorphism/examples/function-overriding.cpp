#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {  // virtual function
        cout << "Display area of shape" << endl;
    }
};

// Derived class
class Rectangle : public Shape {
    int width, height;
public:
    Rectangle(int w, int h) {
        width = w; height = h;
    }
    void area() override {  // overriding
        cout << "Area of rectangle = " << width * height << endl;
    }
};

// Another derived class
class Circle : public Shape {
    double radius;
public:
    Circle(double r) { radius = r; }
    void area() override {
        cout << "Area of circle = " << 3.14159 * radius * radius << endl;
    }
};

int main() {
    Shape *s1;
    Rectangle r(5, 10);
    Circle c(3.0);

    s1 = &r;
    s1->area();  // Calls Rectangle's area()

    s1 = &c;
    s1->area();  // Calls Circle's area()

    return 0;
}
