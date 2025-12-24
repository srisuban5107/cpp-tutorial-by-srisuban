#include <iostream>
#include <ctime>   // for time()
using namespace std;

int main() {
    srand(time(0)); // seed random number generator
    int randNum = rand() % 100 + 1; // random number 1-100
    cout << "Random number between 1 and 100: " << randNum << endl;
    return 0;
}
