#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int *p;

    cout << "Enter number of elements: ";
    cin >> n;

    p = arr;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> *(p + i);

    cout << "Array elements are: ";
    p = arr;

    for (int i = 0; i < n; i++)
        cout << *p++ << " ";

    return 0;
}
