#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int tamil, english, maths, science, social;
    int total;
    float percentage;

    cout << "Enter Tamil mark   : ";
    cin >> tamil;

    cout << "Enter English mark : ";
    cin >> english;

    cout << "Enter Maths mark   : ";
    cin >> maths;

    cout << "Enter Science mark : ";
    cin >> science;

    cout << "Enter Social mark  : ";
    cin >> social;

    total = tamil + english + maths + science + social;
    percentage = total / 5.0;

    cout << "\n----- MARK DETAILS -----\n";
    cout << setw(15) << left << "Tamil"   << ": " << tamil << endl;
    cout << setw(15) << left << "English" << ": " << english << endl;
    cout << setw(15) << left << "Maths"   << ": " << maths << endl;
    cout << setw(15) << left << "Science" << ": " << science << endl;
    cout << setw(15) << left << "Social"  << ": " << social << endl;

    cout << "\nTotal Marks = " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage  = " << percentage << "%" << endl;

    return 0;
}
