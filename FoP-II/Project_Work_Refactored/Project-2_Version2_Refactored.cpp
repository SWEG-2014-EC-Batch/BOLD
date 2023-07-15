#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// A program that helps a Business Owner to track his customers
const int MAX_CUSTOMERS = 100;

struct Customer
{
    string name;
    string sex;
    string address;
    double sales;
};

void addCustomer(Customer customers[], int &numCustomers);
void recordSale(Customer customers[], int numCustomers);
void printReport(Customer customers[], int numCustomers);
void searchByID(Customer customers[], int numCustomers);
void searchByName(Customer customers[], int numCustomers);
void saveData(Customer customers[], int numCustomers);
int loadData(Customer customers[]);

int main()
{
    Customer customers[MAX_CUSTOMERS];
    int numCustomers = 0;

    char option1;
    cout << "Do you want to load existing customer data? (y/n): ";
    cin >> option1;
    if (option1 == 'y' || option1 == 'Y')
    {
        numCustomers = loadData(customers);
    }

    int option;
    do
    {
        cout << "\n\n";
        cout << "Welcome to the Customer Tracking Program!" << endl;
        cout << "This program allows you to track your customers and their purchases." << endl;
