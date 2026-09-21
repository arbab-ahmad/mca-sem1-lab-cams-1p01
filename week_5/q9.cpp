#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int number;

    cout << "Enter the number whose frequency you want to find: ";
    cin >> number;

    int frequency = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            frequency++;
        }
    }

    cout << "Frequency of " << number << " = " << frequency << endl;

    return 0;
}
