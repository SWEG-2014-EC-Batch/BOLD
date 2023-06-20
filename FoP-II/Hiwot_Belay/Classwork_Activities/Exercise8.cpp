#include <iostream>
#include <string>
using namespace std;

//Check Palindrome

bool isPalindrome(const string& str);
bool isPalindromeRecursive(const string& str, int start, int end);

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << str << " is a palindrome" << endl;
    else
        cout << str << " is not a palindrome" << endl;

    return 0;
}

bool isPalindrome(const string& str)
{
    int start = 0;
    int end = str.length() - 1;
    return isPalindromeRecursive(str, start, end);
}

bool isPalindromeRecursive(const string& str, int start, int end)
{
    // Base cases
    if (start >= end)
        return true;

    if (str[start] != str[end])
        return false;

    // Recursive case
    return isPalindromeRecursive(str, start + 1, end - 1);
}
