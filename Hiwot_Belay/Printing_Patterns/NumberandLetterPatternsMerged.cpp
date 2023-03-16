#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    char ch;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Number square pattern 
    cout << "Number square pattern:\n";
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            cout << j;
        }
        cout << endl;
    }

    // Small letters square pattern 
    cout << "\nSmall letters square pattern:\n";
    ch = 'a';
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            cout << ch++;
        }
        cout << endl;
        ch = 'a';
    }

    // Capital letters square pattern 
    cout << "\nCapital letters square pattern:\n";
    ch = 'A';
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            cout << ch++;
        }
        cout << endl;
        ch = 'A';
    }

    // Capital letters half pyramid
    cout << "\nCapital letters half pyramid:\n";
    ch = 'A';
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch++;
        }
        cout << endl;
        ch = 'A';
    }

    // Numbers half pyramid
    cout << "\nNumbers half pyramid:\n";
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    // Numbers half inverted pyramid
    cout << "\nNumbers half inverted pyramid:\n";
    for(int i = rows; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
