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
        cout << "Let's get started!" << endl;
        cout << "\n\n";
        cout << "1. Add new customer\n";
        cout << "2. Record sale\n";
        cout << "3. Print report\n";
        cout << "4. Search customer by code\n";
        cout << "5. Search customer by name\n";
        cout << "6. Exit\n";

        cout << "Enter option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            addCustomer(names, sexes, addresses, sales, numCustomers);
            break;
        case 2:
            recordSale(names, sales, numCustomers);
            break;
        case 3:
            printReport(names, sexes, addresses, sales, numCustomers);
            break;
        case 4:
            searchByID(names, sexes, addresses, sales, numCustomers);
            break;
        case 5:
            searchByName(names, sexes, addresses, sales, numCustomers);
            break;
 case 6:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid option, please try again." << endl;
            break;
        }
    } while (option != 6);

    return 0;
}

// Function to add a new customer
void addCustomer(string names[], string sexes[], string addresses[], double sales[], int& numCustomers)
{
    if (numCustomers == MAX_CUSTOMERS)
    {
        cout << "Maximum number of customers reached." << endl;
    }
    else
    {
        cout << "Enter customer name: ";
        cin >> names[numCustomers];
        cout << "Enter customer sex (m/f): ";
        cin >> sexes[numCustomers];
        cout << "Enter customer address: ";
        cin.ignore();
        getline(cin, addresses[numCustomers]);
        sales[numCustomers] = 0;
cout << "Customer " << names[numCustomers] << " added with ID " << numCustomers << endl;
        numCustomers++;
    }
}

// Function to record a sale for a customer
void recordSale(string names[], double sales[], int numCustomers)
{
    int id;
    cout << "Enter customer ID: ";
    cin >> id;
    if (id < 0 || id >= numCustomers)
    {
        cout << "Invalid customer ID." << endl;
    }
    else
    {
        double sale;
        cout << "Enter sale amount: $";
        cin >> sale;
        sales[id] += sale;
        cout << "Sale of $" << sale << " recorded for customer " << names[id] << endl;
    }
}

// Print a report of all customers and their sales
void printReport(const string names[], const string sexes[], const string addresses[], const double sales[], int numCustomers)
{
