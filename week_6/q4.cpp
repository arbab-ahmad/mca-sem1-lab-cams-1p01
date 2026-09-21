#include <iostream>
using namespace std;

int main() {
    int num;
    int *p = &num;

    cout << "Enter an integer: ";
    cin >> num;

    (*p)++;
    cout << "After increment = " << *p << endl;

    (*p)--;
    cout << "After decrement = " << *p << endl;

    return 0;
}
