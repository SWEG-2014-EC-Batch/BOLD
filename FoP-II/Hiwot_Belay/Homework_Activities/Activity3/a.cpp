#include <iostream>
#include "a_header.h"
using namespace std;

//A program that finds the length of a string, numbers of vowels and consonants
int main() {
    cout << "Enter a string: ";
    string userInput;
    getline(cin, userInput);

    const char* str = userInput.c_str();

    // Calculate string length
    int length = stringLength(str);
    cout << "String Length: " << length << endl;

    // Count vowels
    int vowelCount = countVowels(str);
    cout << "Number of Vowels: " << vowelCount << endl;

    // Count consonants
    int consonantCount = countConsonants(str);
    cout << "Number of Consonants: " << consonantCount << endl;

    return 0;
}

// Function definitions
int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int countVowels(const char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int countConsonants(const char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
                count++;
            }
        }
    }
    return count;
}
