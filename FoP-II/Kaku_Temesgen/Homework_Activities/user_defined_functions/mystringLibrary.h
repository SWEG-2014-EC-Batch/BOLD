// This c++ program is a library of functions that can be used to manipulate strings.
using namespace std;
#ifndef MYSTRINGLIBRARY_H
#define MYSTRINGLIBRARY_H

#include <string>

// Function declarations
int stringLength(string s);
int countVowels(string s);
int countConsonants(string s);
string reverseString(string s);
int compareStrings(string s1, string s2);
string toLowerCase(string s);
string toUpperCase(string s);

#endif

// Find the length of a string
int stringLength(string s) {
    int count = 0;

    while (s[count] != '\0') {
        count++;
    }

    return count;
}

// Count the number of vowels in a string
int countVowels(string s) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
            || s[i] == 'o' || s[i] == 'u' || s[i] == 'A'
            || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'
            || s[i] == 'U') {
            count++;
        }
    }

    return count;
}

// Count the number of consonants in a string
int countConsonants(string s) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32; // Convert uppercase to lowercase
        }

        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i'
                && s[i] != 'o' && s[i] != 'u') {
                count++;
            }
        }
    }

    return count;
}

// Reverse a string
string reverseString(string s) {
    int length = stringLength(s);
    string reversedStr = "";

    for (int i = length-1; i >= 0; i--) {
        reversedStr += s[i];
    }

    return reversedStr;
}

// Compare two strings
int compareStrings(string s1, string s2) {
    int i = 0;

    while (s1[i] == s2[i]) {
        if (s1[i] == '\0' && s2[i] == '\0') {
            return 0;
        }

        i++;
    }

    if (s1[i] > s2[i]) {
        return 1;
    } else {
        return -1;
    }
}

// Convert a string to lowercase version
string toLowerCase(string s) {
    int length = stringLength(s);

    for (int i = 0; i < length; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32; // Convert uppercase to lowercase
        }
    }

    return s;
}

// Convert a string to uppercase version
string toUpperCase(string s) {
    int length = stringLength(s);

    for(int i=0; i<length; i++){
        if (s[i]>='a' && s[i] <= 'z'){
            s[i]-=32; //convert lowercase to uppercase
        }
    }
    return s;
}
