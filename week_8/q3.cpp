#include<iostream>
using namespace std;

void replaceString(char str[], char findStr[], char replaceStr[]) {
    char result[300];
    int i, j, k = 0, pos = -1;

    // Find the string
    for (i = 0; str[i] != '\0'; i++) {
        j = 0;

        while (findStr[j] != '\0' && str[i + j] == findStr[j])
            j++;

        if (findStr[j] == '\0') {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "String not found!";
        return;
    }

    // Copy characters before the found string
    for (i = 0; i < pos; i++)
        result[k++] = str[i];

    // Copy replacement string
    for (i = 0; replaceStr[i] != '\0'; i++)
        result[k++] = replaceStr[i];

    // Skip the found string
    i = pos;
    while (findStr[i - pos] != '\0')
        i++;

    // Copy remaining characters
    while (str[i] != '\0')
        result[k++] = str[i++];

    result[k] = '\0';

    cout << "Modified sentence: " << result;
}




int main() {
    char str[200], findStr[50], replaceStr[50];

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    cout << "Enter the string to find: ";
    cin.getline(findStr, 50);

    cout << "Enter the replacement string: ";
    cin.getline(replaceStr, 50);

    replaceString(str, findStr, replaceStr);

    return 0;
}
