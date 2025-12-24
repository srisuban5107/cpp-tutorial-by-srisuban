#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 45, 7, 22, 34, 5};
    int key;
    cout << "Enter number to search: ";
    cin >> key;

    bool found = false;
    for(int i=0; i<6; i++) {
        if(arr[i] == key) {
            found = true;
            cout << key << " found at position " << i << endl;
            break;
        }
    }

    if(!found)
        cout << key << " not found in array." << endl;

    return 0;
}
