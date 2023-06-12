//A Leapyear checker c++ program.
#include <iostream>

using namespace std;

int isLeapYear(int year) {
    // If the year is divisible by 4
    if (year % 4 == 0) {
        // If the year is divisible by 100 but not divisible by 400
        if (year % 100 == 0 && year % 400 != 0) {
            return 0; // Not a leap year
        }
        return 1; // Leap year
    }
    return 0; // Not a leap year
}

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
