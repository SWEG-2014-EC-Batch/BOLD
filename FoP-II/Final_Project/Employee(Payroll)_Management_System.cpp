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
