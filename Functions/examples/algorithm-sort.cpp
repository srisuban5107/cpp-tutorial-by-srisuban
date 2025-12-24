#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n); // sort array ascending

    cout << "Sorted array: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
