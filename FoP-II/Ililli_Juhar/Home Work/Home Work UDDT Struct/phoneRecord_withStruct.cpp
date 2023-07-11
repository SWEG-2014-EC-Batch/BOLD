#include <iostream>
using namespace std;

// Structure to store the phone records of a person
struct PhoneRecord {
  string name;
  int areacode;
  int exchanger;
  int no;
};

// Function to get the phone records of 10 persons
void getPhoneRecords(PhoneRecord records[]);

// Function to print the phone records of 10 persons
void printPhoneRecords(PhoneRecord records[]);

int main() {
  // Create an array to store the phone records of 10 persons
  PhoneRecord records[10];

  // Get the phone records of 10 persons
  getPhoneRecords(records);

  // Print the phone records of 10 persons
  printPhoneRecords(records);

  return 0;
}
