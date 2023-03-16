#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Half pyramid pattern
    cout << "Half pyramid pattern:\n";
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted half pyramid pattern
    cout << "\nInverted half pyramid pattern:\n";
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Hollow inverted half pyramid pattern
    cout << "\nHollow inverted half pyramid pattern:\n";
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            if (i == rows || j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Full pyramid pattern
    cout << "\nFull pyramid pattern:\n";
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted full pyramid pattern
    cout << "\nInverted full pyramid pattern:\n";
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Hollow full pyramid pattern
    cout << "\nHollow full pyramid pattern:\n";
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (i == rows || j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
