#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("notes.txt");
    outFile << "C++ is fun!\n";
    outFile << "Functions and Headers examples.\n";
    outFile.close();

    ifstream inFile("notes.txt");
    string line;
    cout << "Reading from file:\n";
    while(getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
