#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 5, 8, 12, 20};
    int key;
    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = 4, mid;
    bool found = false;

    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] == key) {
            found = true;
            cout << key << " found at index " << mid << endl;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        cout << key << " not found in array." << endl;

    return 0;
}
