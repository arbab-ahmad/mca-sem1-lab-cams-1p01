
#include <iostream>
using namespace std;

int main()
{
    string name;
    float basic, da, gross;

    for (int i = 1; i <= 100; i++)
    {
        cout << "\nEnter employee name: ";
        cin >> name;

        cout << "Enter basic pay: ";
        cin >> basic;

        da = basic * 52 / 100;
        gross = basic + da;

        cout << "Employee Name: " << name << endl;
        cout << "Gross Salary: " << gross << endl;
    }

    return 0;
}

