// string_utils.h
#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>

// A function that converts a given string to lowercase
void string_to_lowercase(std::string& s) {
  // Loop through each character of the string
  for (int i = 0; i < s.length(); i++) {
    // Check if the character is an uppercase letter using ASCII values
    if (s[i] >= 'A' && s[i] <= 'Z') {
      // Add 32 to the ASCII value to get the lowercase letter
      s[i] = s[i] + 32;
    }
  }
}

#endif
