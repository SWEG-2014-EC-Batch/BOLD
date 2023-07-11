/* A c++ program that creates a structure to store the phone records of a person.
   It then gets the phone records of 10 persons and prints them.*/
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

void getPhoneRecords(PhoneRecord records[]) {
  for (int i = 0; i < 10; i++) {
    cout << "Enter the name of person " << i + 1 << ": ";
    cin >> records[i].name;
    cout << "Enter the area code of person " << i + 1 << ": ";
    cin >> records[i].areacode;
    cout << "Enter the exchanger of person " << i + 1 << ": ";
    cin >> records[i].exchanger;
    cout << "Enter the phone number of person " << i + 1 << ": ";
    cin >> records[i].no;
  }
}

void printPhoneRecords(PhoneRecord records[]) {
    cout<<"Name\t\t\t Phone number\n";
  for (int i = 0; i < 10; i++) {
    cout<< records[i].name <<"\t\t\\t "<< records[i].areacode <<"-"<< records[i].exchanger <<"-"<< records[i].no << endl;
  }
}
