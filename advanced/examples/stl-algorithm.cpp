#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 1, 9};

    // Sort the vector
    sort(nums.begin(), nums.end());

    cout << "Sorted numbers: ";
    for(int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    // Find max element
    cout << "Max element: " << *max_element(nums.begin(), nums.end()) << endl;

    return 0;
}
