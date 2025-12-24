#include <iostream>
using namespace std;

int main() {
    int i = 1;
    cout << "Numbers 1 to 5 using do-while loop:" << endl;

    do {
        cout << i << " ";
        i++;
    } while(i <= 5);

    cout << endl;
    return 0;
}
