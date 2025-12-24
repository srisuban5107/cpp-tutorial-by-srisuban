#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show" << endl;
    }
};

int main() {
    Base *b;
    Derived d;
    b = &d;

    b->show();  // Calls Base's show, not Derived
    return 0;
}
