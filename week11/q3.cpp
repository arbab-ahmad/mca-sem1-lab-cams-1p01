#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, temp, digit;
    int d1, d2, d3, d4;
    int choice;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    if (n < 1000 || n > 9999)
    {
        cout << "Please enter a valid 4-digit number.";
        return 0;
    }

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    cout << "\n----- MENU -----" << endl;
    cout << "1. Reverse of Number" << endl;
    cout << "2. Sum of Number and Reverse" << endl;
    cout << "3. Sum of Alternative Digits" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    d4 = n % 10;
    d3 = (n / 10) % 10;
    d2 = (n / 100) % 10;
    d1 = n / 1000;

    switch(choice)
    {
        case 1:
            cout << "Reverse = " << rev;
            break;

        case 2:
            cout << "Sum = " << n + rev;
            break;

        case 3:
            cout << "1st digit + 3rd digit = "
                 << d1 + d3 << endl;

            cout << "2nd digit + 4th digit = "
                 << d2 + d4;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
