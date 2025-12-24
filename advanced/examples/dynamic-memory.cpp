#include <iostream>
using namespace std;

int main() {
    int *p = new int; // allocate memory dynamically
    *p = 50;
    cout << "Value: " << *p << endl;
    delete p; // free memory

    int *arr = new int[5]; // dynamic array
    for(int i = 0; i < 5; i++) arr[i] = i+1;

    cout << "Array: ";
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr; // free array memory
    return 0;
}
