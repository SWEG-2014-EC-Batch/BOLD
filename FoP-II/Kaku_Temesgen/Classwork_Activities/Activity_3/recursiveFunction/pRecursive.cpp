// A C++ program that uses a recursive function to check if a given string is a palindrome.
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int start, int end);

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (isPalindrome(str, 0, str.length() - 1)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
    return 0;
}

bool isPalindrome(string str, int start, int end) {
    if (start >= end) {
        return true;
    } else if (tolower(str[start]) != tolower(str[end])) {
        return false;
    } else {
        return isPalindrome(str, start + 1, end - 1);
    }
}
