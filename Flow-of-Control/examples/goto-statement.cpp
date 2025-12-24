#include <iostream>
using namespace std;

int main() {
    int i = 1;

start: // label
    cout << i << " ";
    i++;
    if(i <= 5) goto start; // jumps to label

    cout << "\nDone with goto example." << endl;
    return 0;
}
