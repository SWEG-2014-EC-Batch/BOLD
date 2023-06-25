// main.cpp
#include <iostream>
#include <algorithm>
#include "string_utils.h"
using namespace std;
int main() {
  // Declare a string variable to store the input
  string str;
  cout << "Please enter a word: ";

  // Get the input from the user using std::getline
  getline(cin, str);

  // Check if the input is not empty
  if (!str.empty()) {
    cout << "Original word: " << str << endl;

    // Call the function to convert the word to lowercase
    string_to_lowercase(str);
    cout << "Lowercase word: " << str << endl;
  }
  else {
    // Display an error message if the input is empty
    cerr << "Error: No input entered." << endl;
  }

  return 0;
}



