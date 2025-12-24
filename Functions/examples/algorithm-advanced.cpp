#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 8, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Maximum element: " << *max_element(arr, arr+n) << endl;
    cout << "Minimum element: " << *min_element(arr, arr+n) << endl;

    reverse(arr, arr+n);
    cout << "Reversed array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
