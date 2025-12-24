#include <iostream>
using namespace std;

int main() {
    cout << "Multiplication table (1 to 3):" << endl;

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            cout << i << " * " << j << " = " << i*j << "\t";
        }
        cout << endl;
    }

    return 0;
}
