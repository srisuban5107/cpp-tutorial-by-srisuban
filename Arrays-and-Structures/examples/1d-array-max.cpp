#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 45, 7, 22, 34, 5};
    int maxVal = arr[0];

    for(int i=1; i<6; i++) {
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Maximum element = " << maxVal << endl;
    return 0;
}
