#include <iostream>
using namespace std;

// A program that stores the 3 parts of a phone number using structure
struct PhoneRecord {
  string name;
  int areacode;
  int exchanger;
  int no;
};

void getPhoneRecords(PhoneRecord records[]);
void printPhoneRecords(PhoneRecord records[]);

int main() {

  PhoneRecord records[10];
  getPhoneRecords(records);
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
