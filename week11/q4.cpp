#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter an integer number: ";
    cin >> n;

    cout << "\n----- MENU -----" << endl;
    cout << "1. Binary" << endl;
    cout << "2. Octal" << endl;
    cout << "3. Hexadecimal" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            if(n < 0)
            {
                cout << "Enter a non-negative number.";
                break;
            }

            if(n == 0)
            {
                cout << "Binary = 0";
                break;
            }

            int temp = n;
            string binary = "";

            while(temp > 0)
            {
                binary = char('0' + temp % 2) + binary;
                temp = temp / 2;
            }

            cout << "Binary = " << binary;
            break;
        }

        case 2:
            if(n < 0)
                cout << "Octal = -" << oct << -n;
            else
                cout << "Octal = " << oct << n;
            break;

        case 3:
            if(n < 0)
                cout << "Hexadecimal = -" << hex << -n;
            else
                cout << "Hexadecimal = " << hex << n;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
