#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << endl;

    // Reverse
    for(int i=0; i<5/2; i++) {
        int temp = arr[i];
        arr[i] = arr[5-1-i];
        arr[5-1-i] = temp;
    }

    cout << "Reversed array: ";
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
