#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40};

    // Add element
    numbers.push_back(50);

    // Display all elements
    cout << "Vector elements: ";
    for(int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // Size of vector
    cout << "Vector size: " << numbers.size() << endl;

    return 0;
}
