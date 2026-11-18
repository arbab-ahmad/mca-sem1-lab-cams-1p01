#include <iostream>
using namespace std;

int findString(char S[], char T[]) {
    int i, j;

    for (i = 0; S[i] != '\0'; i++) {
        j = 0;

        while (T[j] != '\0' && S[i + j] == T[j]) {
            j++;
        }

        if (T[j] == '\0') {
            return i;
        }
    }

    return -1;
}

int main() {
    char S[200], T[100];

    cout << "Enter string S: ";
    cin.getline(S, 200);

    cout << "Enter string T: ";
    cin.getline(T, 100);

    int pos = findString(S, T);

    if (pos != -1)
        cout << "String T begins at index: " << pos << endl;
    else
        cout << "-1" << endl;

    return 0;
}
