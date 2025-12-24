#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;

    Complex(double r=0, double i=0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator + (const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;  // Calls overloaded +
    c3.display(); // Output: 6 + 8i
    return 0;
}
