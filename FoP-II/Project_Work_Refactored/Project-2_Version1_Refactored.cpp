#include <iostream>
#include <string>
using namespace std;

// A program that helps a Business Owner to track his customers
const int MAX_CUSTOMERS = 100;

void addCustomer(string names[], string sexes[], string addresses[], double sales[], int& numCustomers);
void recordSale(string names[], double sales[], int numCustomers);
void printReport(const string names[], const string sexes[], const string addresses[], const double sales[], int numCustomers);
void searchByID(const string names[], const string sexes[], const string addresses[], const double sales[], int numCustomers);
void searchByName(const string names[], const string sexes[], const string addresses[], const double sales[], int numCustomers);

int main()
{
    string names[MAX_CUSTOMERS];
    string sexes[MAX_CUSTOMERS];
    string addresses[MAX_CUSTOMERS];
    double sales[MAX_CUSTOMERS];
    int numCustomers = 0;

    int option;
    do
    {
        cout << "\n\n";
        cout << "Welcome to the Customer Tracking Program!" << endl;
        cout << "This program allows you to track your customers and their purchases." << endl;
        cout << "You can add new customers, record sales, print reports, and search for customers by ID or name." << endl;
