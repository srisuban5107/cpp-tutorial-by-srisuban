#include <iostream>
using namespace std;

class Employee {
private:
    int empno;
    char ename[20];
    float basic, hra, da, netpay;

    float calculate() {
        netpay = basic + hra + da;
        return netpay;
    }

public:
    void havedata() {
        cout << "Enter Employee Number: ";
        cin >> empno;

        cout << "Enter Employee Name: ";
        cin >> ename;

        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;

        calculate();
    }

    void dispdata() {
        cout << "\nEmployee Details\n";
        cout << "Emp No : " << empno << endl;
        cout << "Name   : " << ename << endl;
        cout << "Basic  : " << basic << endl;
        cout << "HRA    : " << hra << endl;
        cout << "DA     : " << da << endl;
        cout << "Net Pay: " << netpay << endl;
    }
};

int main() {
    Employee e;
    e.havedata();
    e.dispdata();
    return 0;
}
