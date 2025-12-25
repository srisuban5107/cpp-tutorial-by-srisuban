#include <iostream>
using namespace std;

class RESORT {
private:
    int Rno;
    char Name[20];
    float Charges;
    int Days;

    float Compute() {
        float total = Days * Charges;
        if (total > 11000)
            total = 1.02 * total;
        return total;
    }

public:
    void GetInfo() {
        cout << "Enter Room Number: ";
        cin >> Rno;

        cout << "Enter Name: ";
        cin >> Name;

        cout << "Enter Charges per Day: ";
        cin >> Charges;

        cout << "Enter Number of Days: ";
        cin >> Days;
    }

    void DispInfo() {
        cout << "\n--- Resort Details ---\n";
        cout << "Room Number : " << Rno << endl;
        cout << "Name        : " << Name << endl;
        cout << "Charges/day : " << Charges << endl;
        cout << "Days Stayed : " << Days << endl;
        cout << "Total Amount: " << Compute() << endl;
    }
};

int main() {
    RESORT r;
    r.GetInfo();
    r.DispInfo();
    return 0;
}
