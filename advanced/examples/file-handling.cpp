#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write to a file
    ofstream outFile("data.txt");
    outFile << "C++ Portfolio Example\n";
    outFile << "Writing to a file is easy!" << endl;
    outFile.close();

    // Read from a file
    ifstream inFile("data.txt");
    string line;
    cout << "Reading file content:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
