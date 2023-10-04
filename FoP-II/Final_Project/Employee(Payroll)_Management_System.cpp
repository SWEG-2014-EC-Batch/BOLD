#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include "logo.h"
using namespace std;

// An Employee/Payroll Management System

void admin();       // Function to handle admin login
void clearScreen(); // Function to clear the screen

// Class definition for Employee
class Employee
{
private:
    string id;
    string name;
    int age;
    string employmentLevel;
    double salary;
    int yearsOfWork;
    string type; // Employee type ("Hourly", "Salaried", "Commissioned")
    double hourlyRate;
    int hoursWorked;

    double commissionRate;
    double sales;

public:
    // Constructor for Employee
    Employee(string empId, string name, string type) // Constructor
        : name(name), id(empId), type(type)
    {
    }
    // Calculate and return the employee's pay based on their type
    double calculatePay() const
    {
        if (type == "Hourly")
        {
            return hourlyRate * hoursWorked;
        }
        else if (type == "Salaried")
        {
            return salary;
        }
        else if (type == "Commissioned")
        {
            return commissionRate * sales;
        }
        else
        {
            // Handle other types or invalid types here
            cout << "Invalid employee type: " << type << endl;
            return 0.0;
        }
    }
    // Setter method for the name field
    void setName(const string &newName)
    {
        name = newName;
    }

    // Setter method for the salary field
    void setSalary(double newSalary)
    {
        salary = newSalary;
    }
    // Getter method for the employee ID
    const string &getId() const
    {
        return id;
    }
    // Getter method for the employee name
    const string &getName() const
    {
        return name;
    }
    // Getter method for the employment level
    const string &getEmploymentLevel() const
    {
        return employmentLevel;
    }
    // Getter method for the employee age
    int getAge() const
    {
        return age;
    }
    // Getter method for the employee type
    const string &getType() const
    {
        return type;
    }

    // Getter method for the hourly rate
    double getHourlyRate() const
    {
        return hourlyRate;
    }

    // Getter method for the hours worked
    int getHoursWorked() const
    {
        return hoursWorked;
    }

    // Getter method for the commission rate
    double getCommissionRate() const
    {
        return commissionRate;
    }

    // Getter method for sales
    double getSales() const
    {
        return sales;
    }

    // Getter method for salary
    double getSalary() const
    {
        return salary;
    }

    // Getter method for years of work
    int getYearsOfWork() const
    {
        return yearsOfWork;
    }

    // Compute the number of years of experience
    void computeExperience()
    {
        int currentYear = static_cast<int>(time(0));
        int birthYear = stoi(id.substr(0, 4));
        yearsOfWork = currentYear - birthYear;
    }
    // Classify the employee based on salary
    void classifyEmployee()
    {
        if (salary >= 50000)
        {
            employmentLevel = "Senior";
        }
        else if (salary >= 30000)
        {
            employmentLevel = "Intermediate";
        }
        else
        {
            employmentLevel = "Junior";
        }
    }
    // Static function to compare employees based on salary and years of experience
    bool static compareEmployees(const Employee &emp1, const Employee &emp2)
{

        if (emp1.salary == emp2.salary)
        {
            return emp1.yearsOfWork > emp2.yearsOfWork;
        }
        return emp1.calculatePay() > emp2.calculatePay();
    }
    // Determine the employment level based on years of work
    string getLevel() const
    {
        if (this->yearsOfWork < 2)
        {
            return "Junior";
        }
        else if (this->yearsOfWork < 5)
        {
            return "Mid-Level";
        }
        else if (this->yearsOfWork < 10)
        {
            return "Senior";
        }
        else
        {
            return "Executive";
        }
    }
    // Get the rank of the employee within a vector of employees
    int getRank(const vector<Employee> &employees) const
    {
        // Sort employees based on the comparison function
        vector<Employee> sortedEmployees = employees;
        sort(sortedEmployees.begin(), sortedEmployees.end(), compareEmployees);

        // Find the rank of this employee
        for (int i = 0; i < sortedEmployees.size(); ++i)
        {
            if (sortedEmployees[i].name == this->name)
            {
                return i + 1; // Adding 1 to convert from zero-based index to rank
            }
        }

        // Return -1 if this employee is not found
        return -1;
    }
    // Check if the employee is retired (retirement age is 65)
    bool isRetired() const
    {
        return yearsOfWork >= 65; // Retirement age is 65
    }
    // Set employee information
    void setEmployeeInfo(double hourlyRate, int hoursWorked, double salary, double commissionRate, double sales, int age, int yearOfWork)
    {
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
        this->salary = salary;
        this->commissionRate = commissionRate;
        this->sales = sales;
        this->age = age;
        this->yearsOfWork = yearOfWork;
    }
    // Calculate the monthly payment after retirement (70% of salary)
    double calculateMonthlyPaymentAfterRetirement() const
    {
        return isRetired() ? (salary * 0.7) : 0.0;
    }
};

// Function Template class for PayrollSystem
template <typename T>
class PayrollSystem
{
private:
    vector<T> employees; // Vector to store employees

public:
    void saveToFile(const string &filename) const
    { // Save employee data to a file in CSV format
        ofstream outputFile(filename);
        if (!outputFile)
        {
            cerr << "Error: Unable to open the file for writing." << endl;
            return;
        }

        for (const Employee &emp : employees)
        {
            // Save all employee attributes in CSV format
            outputFile << emp.getId() << "," << emp.getName() << "," << emp.getAge() << ","
                       << emp.getLevel() << "," << emp.getSalary() << ","
                       << emp.getYearsOfWork() << "," << emp.getType() << ","
                       << emp.getHourlyRate() << "," << std::to_string(emp.getHoursWorked()) << ","
                       << emp.getCommissionRate() << "," << emp.getSales() << endl;
        }

        outputFile.close();
    }
    // Load employee data from a file in CSV format
    void loadFromFile(const string &filename)
    {
        ifstream inputFile(filename);
        if (!inputFile)
        {
            cerr << "Error: Unable to open the file for reading." << endl;
            return;
        }

        employees.clear(); // Clear existing data

        string line, yearsOfWorkst1r;
        while (getline(inputFile, line))
        {
            istringstream iss(line);
            string id, name, level, salaryStr, ageStr, type, hourlyRateStr, yearsOfWorkStr, hoursWorkedStr, commissionRateStr, salesStr;
            double salary, hourlyRate, commissionRate, sales;
            int age, hoursWorked, yearsOfWork;

            if (getline(iss, id, ',') && getline(iss, name, ',') && getline(iss, ageStr, ',') &&
                getline(iss, level, ',') && getline(iss, salaryStr, ',') && getline(iss, yearsOfWorkStr, ',') &&
                getline(iss, type, ',') && getline(iss, hourlyRateStr, ',') && getline(iss, hoursWorkedStr, ',') &&
                getline(iss, commissionRateStr, ',') && getline(iss, salesStr))
            {
                salary = stod(salaryStr);
                age = stoi(ageStr);

                std::istringstream iss(yearsOfWorkStr); // Convert string to int
                if (iss >> yearsOfWork)
                {
                }
                else
                {
                    yearsOfWork = 0;
                }

                yearsOfWorkst1r = yearsOfWorkStr;
                hourlyRate = stod(hourlyRateStr);
                hoursWorked = stoi(hoursWorkedStr);
                commissionRate = stod(commissionRateStr);
                sales = stod(salesStr);

                Employee emp(id, name, type);

                emp.setEmployeeInfo(hourlyRate, hoursWorked, salary, commissionRate, sales, age, yearsOfWork);

                employees.push_back(emp);
            }
        }

        inputFile.close();
  }
    // Add an employee to the system
    void addEmployee(const T &emp)
    { // Add employee
        employees.push_back(emp);
    }

    void printTableHeader() const
    { // Print table header
        cout << "\t\t+------+-------------------+--------------+------------+--------------+-----------------+" << endl;
        cout << "\t\t|  ID  |       Name        |     Type     |    Rank    |    Level     |   Experience    |" << endl;
        cout << "\t\t+------+-------------------+--------------+------------+--------------+-----------------+" << endl;
    }

    void printEmployee(const T &emp) const
    { // Print employee information
        cout << "\t\t| " << left << setw(5) << emp.getId() << " | " << setw(17) << emp.getName() << " | " << setw(12) << emp.getType()
             << " | #" << setw(9) << fixed << setprecision(2) << emp.getRank(employees) << " | " << setw(12) << emp.getLevel()
             << " | " << setw(14) << emp.getYearsOfWork() << " |" << endl;
    }
    // Static function to compare employees by name in ascending and desending order
    bool static compareEmployeesByNameAscending(const Employee &emp1, const Employee &emp2)
    {
        return emp1.getName() < emp2.getName();
    }
    bool static compareEmployeesByNameDesending(const Employee &emp1, const Employee &emp2)
    {
        return emp1.getName() > emp2.getName();
    }
    void determineRetirement()
    { // Determine retirement status for employees
        clearScreen();
        logo();
        // Print the table header
        cout << "\t\t=========================================|Retirement|===================================\n";
        cout << "\t\t+------+-------------------+--------------+------------+--------------+-----------------+" << endl;
        cout << "\t\t|  ID  |       Name        |     Type     |    Rank    |  is_Retired  |    Pension      |" << endl;
        cout << "\t\t+------+-------------------+--------------+------------+--------------+-----------------+" << endl;

        // Loop through each employee to determine retirement status
        for (const Employee &emp : employees)
        {
            // Determine retirement status
            string retirementStatus = emp.isRetired() ? "Retired" : "Active";

            // Calculate monthly pension after retirement
            double monthlyPension = emp.calculateMonthlyPaymentAfterRetirement();

            // Display employee information in the table format
            cout << "\t\t| " << setw(5) << emp.getId() << " | " << setw(17) << emp.getName() << " | "
                 << setw(12) << emp.getType() << " | " << setw(10) << emp.getRank(employees) << " | "
                 << setw(12) << retirementStatus << " | $" << setw(14) << fixed << setprecision(2) << monthlyPension << " |" << endl;
        }

        // Print the table footer
        cout << "\t\t+------+-------------------+--------------+------------+--------------+-----------------+" << endl;
        cout << "\n\tpress anykey to go back ";
        char opt;
        cin >> opt;
        clearScreen();
        logo();
    }

    void deleteEmployeeByNameOrId(string searchKey)
    {
        bool found = false;

        // Iterate through the employees and look for a match by name or ID
        for (auto it = employees.begin(); it != employees.end(); ++it)
        {
            if (it->getId() == searchKey || it->getName() == searchKey)
            {
                // Employee found, erase it from the vector
                it = employees.erase(it);
                cout << "\t\tEmployee record deleted successfully.\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "\n";
            cout << "\t\t\t+----------------------------------+\n";
            cout << "\t\t\t|  No matching employees found    |\n";
            cout << "\t\t\t|  for '" << searchKey << "'.         |\n";
            cout << "\t\t\t+----------------------------------+\n";
        }
    }

    // Function to edit an existing employee record
    void editEmployeeRecord(vector<Employee> &employees, const string &searchKey)
    {
        clearScreen();
        logo();
        displayEmployeesTable();
        bool found = false;

        for (Employee &emp : employees)
        {
            if (emp.getId() == searchKey || emp.getName() == searchKey)
            {
                found = true;

                cout << "\t\tEditing employee record for: " << emp.getName() << endl;

                // Ask the user to enter updated information
                string newName;

                string name, type;
                int empId, age, yearOfWork;
                double hourlyRate, salary, commissionRate, sales;
                int hoursWorked;
                double newSalary;

                cout << "\t\tEnter new name: ";
                cin.ignore(); // Clear the newline character from previous input
                getline(cin, newName);

                cout << "\t\tEnter employee Age: ";
                cin >> age;
                cout << "\t\tEnter year of work: ";
                cin >> yearOfWork;

                type = emp.getType();

                if (type == "Hourly" || type == "h")
                {

                    cout << "\t\tEnter hourly rate: ";
                    cin >> hourlyRate;
                    cout << "\t\tEnter hours worked: ";
                    cin >> hoursWorked;
                }
                else if (type == "Salaried" || type == "s")
                {

                    cout << "\t\tEnter salary: ";
                    cin >> salary;
                }
                else if (type == "Commissioned" || type == "c")
                {

                    cout << "\t\tEnter commission rate: ";
                    cin >> commissionRate;
                    cout << "\t\tEnter sales: ";
                    cin >> sales;
                }

                emp.setEmployeeInfo(hourlyRate, hoursWorked, salary, commissionRate, sales, age, yearOfWork);
 
           
