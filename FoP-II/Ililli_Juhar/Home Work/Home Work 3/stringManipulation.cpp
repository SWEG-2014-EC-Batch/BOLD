//This program is to demonstrate the use of functions as a user defined library 
#include "mystringLibrary.h"
#include <iostream>

using namespace std;

int main() {
    // Define the input strings
    string str1 = "The is a good year";
    cout<<str1<<endl;
    string str2 = "The is the best year";
    cout<<str2<<endl;
    
    // Find the length of the first string and the number of vowels and consonants in it
    int length = stringLength(str1);
    int vowels = countVowels(str2);
    int consonants = countConsonants(str1);
    
    // Reverse the second string
    string reversedStr = reverseString(str2);
    
    // Compare the two strings
    int comparisonResult = compareStrings(str1, str2);
    
    // Convert both strings to lowercase version
    string lower1 = toLowerCase(str1);
    string lower2 = toLowerCase(str2);
    
    // Convert both strings to uppercase version
    string upper1 = toUpperCase(str1);
    string upper2 = toUpperCase(str2);
    
    // Display the results
    cout << "Length of the string 1 is: " << length <<endl;
    cout << "Number of vowels in string 2 is: " << vowels <<endl;
    cout << "Number of consonants in string 1 is: " << consonants << endl;
    cout << "Reverse of string 2 is: " << reversedStr <<endl;
    
    if (comparisonResult == 0) {
        cout << "String 1 and 2 are equal." <<endl;
    } else if (comparisonResult == 1) {
        cout << "String 1 is greater." <<endl;
    } else {
        cout << "String 2 is greater." <<endl;
    }
    
    std::cout << "Lowercase version of string 1: " << lower1 << std::endl;
    std::cout << "Lowercase version of string 2: " << lower2 << std::endl;
    
    std::cout << "Uppercase version of string 1: " << upper1 << std::endl;
    std::cout << "Uppercase version of string 2: " << upper2 << std::endl;
    
    return 0;
}
