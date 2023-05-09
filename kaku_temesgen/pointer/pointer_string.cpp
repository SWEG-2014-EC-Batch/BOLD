// C++ program to store and display a string using pointers in a character array.
#include <iostream>
using namespace std;

int main() {
    char message[] = "vacation is near"; // Declare and initialize the character array
    char* strng = message; // Declare a pointer to the message array and assign it to the message array

    cout << strng << endl; // Display the contents of the message array using the pointer

    return 0;
}
