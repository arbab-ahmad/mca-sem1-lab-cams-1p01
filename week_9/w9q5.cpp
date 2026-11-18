#include <iostream>
using namespace std;

void display(int arr[], int n, int i) {
    if (i == n)
        return;

    cout << arr[i] << " ";
    display(arr, n, i + 1);
}

int main() {
    int n, arr[100];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    display(arr, n, 0);

    return 0;
}

