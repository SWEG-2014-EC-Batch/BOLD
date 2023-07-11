#include<iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct customer {
    int account_number;
    string first_name;
    string last_name;
    double balance;
};

void write_file() {
    ofstream outfile("customers.txt");
    for (int i = 0; i < 5; i++) {
        customer c;
        c.account_number = 1000 + i;
        cout << "Enter first name for account " << c.account_number << ": ";
        cin >> c.first_name;
        cout << "Enter last name for account " << c.account_number << ": ";
        cin >> c.last_name;
        cout << "Enter balance for account " << c.account_number << ": ";
        cin >> c.balance;
        outfile << c.account_number << " " << c.first_name << " " << c.last_name << " " << c.balance << endl;
    }
    outfile.close();
}

void read_file() {
    ifstream infile("customers.txt");
    int account_number;
    cout << "Enter account number: ";
    cin >> account_number;
    bool found = false;
    while (!infile.eof()) {
        customer c;
        infile >> c.account_number >> c.first_name >> c.last_name >> c.balance;
        if (c.account_number == account_number) {
            cout << "Name: " << c.first_name << " " << c.last_name << endl;
            cout << "Balance: $" << fixed << setprecision(2) << c.balance << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Account not found." << endl;
    }
    infile.close();
}

int main() {
    write_file();
    read_file();
    return 0;
}