#include <iostream>
using namespace std;
// Function to compare two strings and return the result
int stringCompare(string str1, string str2) {
    int i = 0;
    int j = 0;
    while (str1[i] != '\0' && str2[j] != '\0') {
        if (str1[i] > str2[j]) {
            return 1;
        }
        else if (str1[i] < str2[j]) {
            return -1;
        }
        i++;
        j++;
    }
    if (str1[i] == '\0' && str2[j] == '\0') {
        return 0;
    }
    else if (str1[i] != '\0') {
        return 1;
    }
    else {
        return -1;
    }
}
