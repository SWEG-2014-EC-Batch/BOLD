#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Customer {
    int accountNumber;
    string firstName;
    string lastName;
    double balance;
};

const int MAX_CUSTOMERS = 5;

void readCustomerRecords(Customer customers[]);
void displayCustomerInfo(const Customer& customer);

int main() {
    Customer customers[MAX_CUSTOMERS];
    readCustomerRecords(customers);

    int accountNumber;
    cout << "Enter an account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < MAX_CUSTOMERS; ++i) {
        if (customers[i].accountNumber == accountNumber) {
            displayCustomerInfo(customers[i]);
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Customer not found for the given account number." << endl;
    }

    return 0;
}

void readCustomerRecords(Customer customers[]) {
    ifstream inputFile("customer_records.txt");
    if (!inputFile) {
        cerr << "Error opening file: customer_records.txt" << endl;
        exit(1);
    }

    for (int i = 0; i < MAX_CUSTOMERS; ++i) {
        inputFile >> customers[i].accountNumber;
        inputFile >> customers[i].firstName;
        inputFile >> customers[i].lastName;
        inputFile >> customers[i].balance;
    }

    inputFile.close();
}

void displayCustomerInfo(const Customer& customer) {
    cout << "Account Number: " << customer.accountNumber << endl;
    cout << "Name: " << customer.firstName << " " << customer.lastName << endl;
    cout << "Balance: $" << customer.balance << endl;
}
