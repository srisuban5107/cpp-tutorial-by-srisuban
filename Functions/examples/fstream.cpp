#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to file
    ofstream outFile("example.txt");
    outFile << "Hello C++ File Handling!" << endl;
    outFile.close();

    // Reading from file
    ifstream inFile("example.txt");
    string line;
    while(getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
