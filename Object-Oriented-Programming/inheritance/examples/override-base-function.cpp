#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // override base function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base *b;
    Derived d;
    b = &d;

    b->show();  // Calls Derived's function because of virtual
    return 0;
}
