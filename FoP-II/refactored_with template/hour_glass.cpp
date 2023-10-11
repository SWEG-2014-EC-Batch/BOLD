#include <iostream>
using namespace std;

// Function template to get input from user
template <class t>
void getInput(t &n) {
    cout << "\n";
    cout << "Welcome to the Hourglass pattern program!\n";
    cout << "This program will print the character hourglass pattern up to a maximum input of 14.\n";
    cout << "Enter the size of the pattern you want to print (at most 14): ";
    cin >> n;
    while (n > 14) {
        cout << "Invalid input. Please enter a number at most 14: ";
        cin >> n;
    }
}

// Function template to print upper half of pattern
template <class t>
void printUpperHalf(t n) {
    for (t i = n; i >= 1; i--) {
        for (t k = n; k >= i; k--) {
            cout << "  ";
        }
        for (t j = 1; j <= (2 * i) - 1; j++) {
            if (j <= i) {
                cout << (char)('A' + j - 1) << " ";
            } else {
                cout << (char)('A' + (2 * i) - j - 1) << " ";
            }
        }
        cout << endl;
    }
}

// Function template to print lower half of pattern
template <class t>
void printLowerHalf(t n) {
    for (t i = 2; i <= n; i++) {
        for (t k = n; k >= i; k--) {
            cout << "  ";
        }
        for (t j = 1; j <= (2 * i) - 1; j++) {
            if (j <= i) {
                cout << (char)('A' + j - 1) << " ";
            } else {
                cout << (char)('A' + (2 * i) - j - 1) << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    char choice;
    do {
        int n;
        getInput(n); // Get input from user
        cout << endl;
        printUpperHalf(n); // Print upper half of pattern
        printLowerHalf(n); // Print lower half of pattern
        cout << "\n";
        cout << "Do you want to print again? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

