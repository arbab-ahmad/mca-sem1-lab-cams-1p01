#include <iostream>
using namespace std;

int main() {
    int num;
    int *p = &num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Address of variable = " << p << endl;
    cout << "Value = " << *p;

    return 0;
}
