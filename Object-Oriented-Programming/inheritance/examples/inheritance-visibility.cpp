#include <iostream>
using namespace std;

class Base {
public:
    int a;
protected:
    int b;
private:
    int c;
};

// Public inheritance
class DerivedPublic : public Base {
public:
    void display() {
        a = 10; // accessible
        b = 20; // accessible
        // c = 30; // not accessible
        cout << "Public inheritance: a=" << a << ", b=" << b << endl;
    }
};

// Protected inheritance
class DerivedProtected : protected Base {
public:
    void display() {
        a = 15; // accessible
        b = 25; // accessible
        cout << "Protected inheritance: a=" << a << ", b=" << b << endl;
    }
};

// Private inheritance
class DerivedPrivate : private Base {
public:
    void display() {
        a = 5; // accessible
        b = 10; // accessible
        cout << "Private inheritance: a=" << a << ", b=" << b << endl;
    }
};

int main() {
    DerivedPublic dp;
    dp.display();

    DerivedProtected dprot;
    dprot.display();

    DerivedPrivate dpriv;
    dpriv.display();

    return 0;
}
