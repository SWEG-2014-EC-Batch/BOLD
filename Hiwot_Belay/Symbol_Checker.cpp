#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is in upper case." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is in lower case." << endl;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "The character is a vowel." << endl;
        }
        else {
            cout << "The character is a consonant." << endl;
        }
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
        if ((ch - '0') % 2 == 0) {
            cout << "The digit is even." << endl;
        }
        else {
            cout << "The digit is odd." << endl;
        }
    }
    else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}
