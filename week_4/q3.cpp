#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;
    int result;

    cout << "Enter values of a, b, c, d, e, f, g: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    result = (a + b / c * d - e) * (f - g);

    cout << "Result = " << result;

    return 0;
}

