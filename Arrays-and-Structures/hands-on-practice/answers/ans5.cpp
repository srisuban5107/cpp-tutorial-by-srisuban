#include <iostream>
using namespace std;

int main() {
    int n, a[50], even = 0, odd = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even count = " << even << endl;
    cout << "Odd count = " << odd;

    return 0;
}
