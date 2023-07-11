#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the file for reading
    ifstream file("Sheet5Ex5.cpp");

    // Declare a variable to store each character read from the file
    char character;

    // Declare an array to store the number of occurrences of each lowercase letter
    int occurrences[26] = {0};

    // Read each character from the file until the end is reached
    while (file >> character) {
        // Check if the character is a lowercase letter
        if (character >= 'a' && character <= 'z') {
            // Increment the corresponding element in the occurrences array
            occurrences[character - 'a']++;
        }
    }

    // Print the number of occurrences of each lowercase letter
    cout << "CHARACTER OCCURRENCES\n";
    for (int i = 0; i < 26; i++) {
        cout << static_cast<char>('a' + i) << "     " << occurrences[i] << "\n";
    }

    // Close the file
    file.close();

    return 0;
}
