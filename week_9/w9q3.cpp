
#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    cout << "Enter rows and columns of matrix: ";
    cin >> rows >> cols;

    int A[10][10], T[10][10];

    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> A[i][j];

    cout << "Original matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }


    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            T[j][i] = A[i][j];

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j)
            cout << T[i][j] << " ";
        cout << endl;
    }

    return 0;
}

