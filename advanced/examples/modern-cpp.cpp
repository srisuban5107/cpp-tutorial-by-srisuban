#include <iostream>
#include <vector>
using namespace std;

int main() {
    // auto keyword
    auto x = 10; // compiler infers type
    auto y = 3.14;
    cout << "x = " << x << ", y = " << y << endl;

    // nullptr
    int* ptr = nullptr;
    if(ptr == nullptr) cout << "Pointer is null\n";

    // Range-based for loop
    vector<int> nums = {1,2,3,4,5};
    cout << "Numbers: ";
    for(auto n : nums) cout << n << " ";
    cout << endl;

    // Lambda function
    auto square = [](int n){ return n*n; };
    cout << "Square of 5 = " << square(5) << endl;

    return 0;
}
