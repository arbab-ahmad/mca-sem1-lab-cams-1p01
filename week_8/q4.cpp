#include <iostream>
using namespace std;

// Function to compare two words
bool compareWord(char text[], int pos, char word[]) {
    int i = 0;

    while (word[i] != '\0') {
        if (text[pos + i] != word[i]) {
            return false;
        }
        i++;
    }

    // Check word boundaries
    if (pos > 0 && text[pos - 1] != ' ') {
        return false;
    }

    if (text[pos + i] != ' ' && text[pos + i] != '\0') {
        return false;
    }

    return true;
}

// Function to count occurrences of a word
int countWord(char text[], char word[]) {
    int i, count = 0;

    if (word[0] == '\0') {
        return 0;
    }

    for (i = 0; text[i] != '\0'; i++) {
        if (compareWord(text, i, word)) {
            count++;
        }
    }

    return count;
}

int main() {
    char text[500], word[50];

    cout << "Enter a line of text: ";
    cin.getline(text, 500);

    cout << "Enter the word to count: ";
    cin.getline(word, 50);

    cout << "Occurrences of \"" << word << "\": "
         << countWord(text, word) << endl;

    return 0;
}
