#include <iostream>
using namespace std;

void calc(int a, int b, char op) {
    switch(op) {
        case '+': cout << "Result = " << a + b; break;
        case '-': cout << "Result = " << a - b; break;
        case '*': cout << "Result = " << a * b; break;
        case '/':
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero not allowed";
            break;
        default:
            cout << "Invalid operator";
    }
}

int main() {
    int x, y;
    char op;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Enter operator (+ - * /): ";
    cin >> op;

    calc(x, y, op);
    return 0;
}
