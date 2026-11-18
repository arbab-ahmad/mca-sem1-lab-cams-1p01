#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:

    // Assign initial values
    void assign(string n, int acc, string type, float bal)
    {
        name = n;
        accountNumber = acc;
        accountType = type;
        balance = bal;
    }

    // Deposit amount
    void deposit(float amount)
    {
        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw amount
    void withdraw(float amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    float amount;

    b.assign("Rahul", 12345, "Savings", 5000);

    b.display();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    b.deposit(amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    b.withdraw(amount);

    b.display();

    return 0;
}
