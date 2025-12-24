#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // static member

    Counter() { count++; }

    static void displayCount() {
        cout << "Number of objects created = " << count << endl;
    }
};

// Initialize static member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::displayCount(); // Access static function without object
    return 0;
}
