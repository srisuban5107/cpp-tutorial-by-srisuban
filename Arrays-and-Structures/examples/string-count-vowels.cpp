#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int count = 0;
    for(int i=0; str[i]!='\0'; i++) {
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }

    cout << "Number of vowels = " << count << endl;
    return 0;
}
