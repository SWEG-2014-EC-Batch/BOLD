#ifndef REVERSE_STRING_H
#define REVERSE_STRING_H

using namespace std;

string reverse_string(string& str) {
    string reversed_string = ""; // create an empty string to store the reversed string
    int i = 0;
    while (str[i] != '\0') { // loop through the string until the null character is reached
        i++;
    }
    for (int j = i - 1; j >= 0; j--) { // loop through the string backwards and add each character to the reversed string
        reversed_string += str[j];
    }
    return reversed_string; // return the reversed string
}


#endif
