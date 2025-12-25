#include <iostream>
using namespace std;

int main() {
    int n, a[50], sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / n;

    return 0;
}
