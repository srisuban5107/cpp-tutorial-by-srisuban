#include <iostream>
using namespace std;

int main() {
    cout << "Numbers 1 to 10, skipping 5 and stopping at 8:" << endl;

    for(int i = 1; i <= 10; i++) {
        if(i == 5) continue; // skip 5
        if(i == 8) break;    // stop at 8
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
