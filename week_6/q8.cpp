#include <iostream>
using namespace std;

int main() {
    int arr[100], n, sum = 0;
    int *p;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    p = arr;

    for (int i = 0; i < n; i++)
        sum += *p++;

    cout << "Sum = " << sum;

    return 0;
}
