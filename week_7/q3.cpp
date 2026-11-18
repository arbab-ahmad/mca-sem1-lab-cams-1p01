#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i;
    float sum, mean;
    float variance, deviation;

    cout << "Enter the value of n: ";
    cin >> n;

    float* x = new float[n];

    cout << "Enter " << n << " real values:\n";

    for (i = 0; i < n; i++) {
        cin >> *(x + i);
    }

    sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + *(x + i);
    }

    cout << "Sum = " << sum << "\n";

    mean = sum / n;
    sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + (*(x + i) - mean) * (*(x + i) - mean);
    }

    variance = sum / n;
    deviation = sqrt(variance);

    cout << "Mean (Average) = " << mean << "\n";
    cout << "Variance = " << variance << "\n";
    cout << "Standard Deviation = " << deviation << "\n";

    delete[] x;

    return 0;
}

