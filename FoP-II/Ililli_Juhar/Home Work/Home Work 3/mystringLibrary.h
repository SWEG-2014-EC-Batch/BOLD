// user_defined_header_file.h
using namespace std;
#ifndef MYSTRINGLIBRARY_H
#define MYSTRINGLIBRARY_H

#include <string>

// Function declarations
int stringLength(string s);
int countVowels(string s);
int countConsonants(string s);
std::string reverseString(string s);
int compareStrings(string s1, string s2);
std::string toLowerCase(string s);
std::string toUpperCase(string s);

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
int countConsonants(std::string s) {
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
string reverseString(std::string s) {
    int length = stringLength(s);
    std::string reversedStr = "";
    
    for (int i = length-1; i >= 0; i--) {
        reversedStr += s[i];
    }
    
    return reversedStr;
}

// Compare two strings
int compareStrings(std::string s1, std::string s2) {
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
string toLowerCase(std::string s) {
    int length = stringLength(s);
    
    for (int i = 0; i < length; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32; // Convert uppercase to lowercase
        }
    }
    
    return s;
}

// Convert a string to uppercase version
string toUpperCase(std::string s) {
    int length = stringLength(s);

    for(int i=0; i<length; i++){
        if (s[i]>='a' && s[i] <= 'z'){
            s[i]-=32; //convert lowercase to uppercase
        }
    }
}