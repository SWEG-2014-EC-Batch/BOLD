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
        cout << "You can add new customers, record sales, print reports, and search for customers by ID or name." << endl;
        cout << "Let's get started!" << endl;
        cout << "\n\n";
        cout << "1. Add new customer\n";
        cout << "2. Record sale\n";
        cout << "3. Print report\n";
        cout << "4. Search customer by code\n";
        cout << "5. Search customer by name\n";
        cout << "6. Save and quit\n";

        cout << "Enter option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            addCustomer(customers, numCustomers);
            break;
        case 2:
            recordSale(customers, numCustomers);
            break;
        case 3:
            printReport(customers, numCustomers);
            break;
        case 4:
            searchByID(customers, numCustomers);
            break;
        case 5:
            searchByName(customers, numCustomers);
            break;
        case 6:
            saveData(customers, numCustomers);
            break;
        default:
            cout << "Invalid option, please try again." << endl;
            break;
        }
    } while (option != 6);

    return 0;
}

// Function to add a new customer
void addCustomer(Customer customers[], int &numCustomers)
{
    if (numCustomers == MAX_CUSTOMERS)
    {
        cout << "Maximum number of customers reached." << endl;
    }
    else
    {
        Customer newCustomer;
        cout << "Enter customer name: ";
        cin >> newCustomer.name;
        cout << "Enter customer sex (m/f): ";
        cin >> newCustomer.sex;
        cout << "Enter customer address: ";
        cin.ignore();
        getline(cin, newCustomer.address);
        newCustomer.sales = 0;

        customers[numCustomers] = newCustomer;
        cout << "Customer " << newCustomer.name << " added with ID " << numCustomers << endl;
        numCustomers++;
    }
}

// Function to record a sale for a customer
void recordSale(Customer customers[], int numCustomers)
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
        customers[id].sales += sale;
        cout << "Sale of $" << sale << " recorded for customer " << customers[id].name << endl;
    }
}

// Print a report of all customers and their sales
void printReport(Customer customers[], int numCustomers)
{
    double totalSales = 0;
    cout << "Customer ID\tName\tSex\tAddress\tSales" << endl;
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < numCustomers; i++)
    {
        cout << i << "\t\t" << customers[i].name << "\t" << customers[i].sex << "\t" << customers[i].address << "\t$" << customers[i].sales << endl;
        totalSales += customers[i].sales;
    }
    cout << "Total sales: $" << totalSales << endl;
    cout << "Average sales per customer: $" << (totalSales / numCustomers) << endl;
}

// Search for a customer by ID
void searchByID(Customer customers[], int numCustomers)
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
        cout << "Customer name: " << customers[id].name << endl;
        cout << "Sex: " << customers[id].sex << endl;
        cout << "Address: " << customers[id].address << endl;
        cout << "Total sales: $" << customers[id].sales << endl;
    }
}

// Search for a customer by name
void searchByName(Customer customers[], int numCustomers)
{
    string name;
    cout << "Enter customer name: ";
    cin >> name;
    bool found = false;
    for (int i = 0; i < numCustomers; i++)
    {
        if (customers[i].name == name)
        {
            cout << "Customer ID: " << i << endl;
            cout << "Sex: " << customers[i].sex << endl;
            cout << "Address: " << customers[i].address << endl;
            cout << "Total sales: $" << customers[i].sales << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Customer not found." << endl;
    }
}

// Save customer data to a file
void saveData(Customer customers[], int numCustomers)
{
    ofstream file("C:\\Users\\lenovo\\Desktop\\SE Program Files\\Project2Version2\\customer_data.txt");
    if (file.is_open())
    {
        file << numCustomers << endl;
        for (int i = 0; i < numCustomers; i++)
        {
            file << customers[i].name << endl;
            file << customers[i].sex << endl;
            file << customers[i].address << endl;
            file << customers[i].sales << endl;
        }
file.close();
        cout << "Customer data saved successfully." << endl;
    }
    else
    {
        cout << "Unable to save customer data." << endl;
    }
}

// Load customer data from a file
int loadData(Customer customers[])
{
    ifstream file("C:\\Users\\lenovo\\Desktop\\SE Program Files\\Project2Version2\\customer_data.txt");
    int numCustomers = 0;
    if (file.is_open())
    {
        file >> numCustomers;
        file.ignore();
        for (int i = 0; i < numCustomers; i++)
        {
            getline(file, customers[i].name);
            getline(file, customers[i].sex);
            getline(file, customers[i].address);
            file >> customers[i].sales;
            file.ignore();
        }
        file.close();
        cout << "Customer data loaded successfully." << endl;
    }
    else
    {
        cout << "Unable to load customer data." << endl;
    }
    return numCustomers;
}

