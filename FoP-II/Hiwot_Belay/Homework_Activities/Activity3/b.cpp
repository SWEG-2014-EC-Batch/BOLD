#include <iostream>
#include <cstring>
#include "b_header.h"
using namespace std;

//A program that reverses a string
int main() {
    cout << "Enter a string: ";
    string userInput;
    getline(cin, userInput);

    char* str = new char[userInput.length() + 1];
    strcpy(str, userInput.c_str());

    // Reverse the string
    reverseString(str);

    cout << "Reversed String: " << str << endl;

    delete[] str;

    return 0;
}

// Function definition
void reverseString(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

