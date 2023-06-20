#include <iostream>
#include <string>
using namespace std;

// Function to print vowel letters in a string
void printVowels(const string &str);

// Function to print consonant letters in a string
void printConsonants(const string &str);

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Print vowel letters
    printVowels(input);
    // Print consonant letters
    printConsonants(input);

    return 0;
}

// Function to check if a character is a vowel
bool isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void printVowels(const string &str)
{
    cout << "Vowel letters: ";
    for (char c : str)
    {
        if (isVowel(c))
        {
            cout << c << " ";
        }
    }
    cout << endl;
}

void printConsonants(const string &str)
{
    cout << "Consonant letters: ";
    for (char c : str)
    {
        if (!isVowel(c) && isalpha(c))
        {
            cout << c << " ";
        }
    }
    cout << endl;
}
