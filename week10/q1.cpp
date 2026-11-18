
#include <iostream>
using namespace std;

struct Complex
{
    float real, imag;
};

void read(Complex &c)
{
    cout << "Enter real and imaginary parts: ";
    cin >> c.real >> c.imag;
}

void display(Complex c)
{
    cout << c.real << " + " << c.imag << "i";
}

int main()
{
    Complex a, b, sum, sub, mul;

    cout << "First complex number:\n";
    read(a);

    cout << "Second complex number:\n";
    read(b);

    // Addition
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;

    // Subtraction
    sub.real = a.real - b.real;
    sub.imag = a.imag - b.imag;

    // Multiplication
    mul.real = a.real * b.real - a.imag * b.imag;
    mul.imag = a.real * b.imag + a.imag * b.real;

    cout << "\nAddition = ";
    display(sum);

    cout << "\nSubtraction = ";
    display(sub);

    cout << "\nMultiplication = ";
    display(mul);

    return 0;
}

