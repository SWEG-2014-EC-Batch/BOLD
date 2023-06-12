// A C++ program that reads in a line of text and tokenizes it using space characters as delimiters
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    for (int i=0; i<input.length(); i++) {
        if (input[i] == ' ') {
            cout << endl;
        } else {
            cout << input[i];
        }
    }

    return 0;
}
