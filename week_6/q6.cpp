#include <iostream>
using namespace std;

int main() {
    char str1[200], str2[100];
    char *p, *q;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    p = str1;
    q = str2;

    while (*p != '\0')
        p++;

    while (*q != '\0') {
        *p = *q;
        p++;
        q++;
    }

    *p = '\0';

    cout << "Concatenated string = " << str1;

    return 0;
}
