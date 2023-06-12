//A c++ program to demonstrate a function with both return and a parameter.
#include <iostream>
using namespace std;

// Function declaration
int isLeapYear(int year);

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
// Function definition
int isLeapYear(int year) {

    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 != 0) {
            return 0; // Not a leap year
        }
        return 1; // Leap year
    }
    return 0; // Not a leap year
}
