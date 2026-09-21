#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int *p = arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> *(p + i);

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";

    return 0;
}
