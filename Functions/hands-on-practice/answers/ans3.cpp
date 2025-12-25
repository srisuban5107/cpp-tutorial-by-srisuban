#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch)) {
        if (isupper(ch))
            cout << "Uppercase alphabet";
        else
            cout << "Lowercase alphabet";
    } else {
        cout << "Not an alphabet";
    }

    return 0;
}
