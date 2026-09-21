#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *p, *q;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p = &a;
    q = &b;

    cout << "Sum = " << (*p + *q);

    return 0;
}
