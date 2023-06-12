#include <iostream>
using namespace std;

// function prototype
int isLeapYear(int year);

int main() {
  int year;
  cout << "Enter a year to check if it is a leap year: ";
  cin >> year;
  
  if (isLeapYear(year)) {
    cout << year << " is a leap year." << endl;
  } else {
    cout << year << " is not a leap year." << endl;
  }
  return 0;
}

int isLeapYear(int year) {
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        return 1; // divisible by 4, 100, and 400
      }
      else {
        return 0; // divisible by 4 and 100, but not 400
        }
    }
    else {
        return 1; // divisible by only 4
        }
  }
  else {
    return 0; // not divisible by 4
    }
}