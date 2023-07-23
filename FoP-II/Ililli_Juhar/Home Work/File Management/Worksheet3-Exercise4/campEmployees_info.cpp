#include <iostream> 
#include <fstream> 
#include <algorithm> 
 
using namespace std; 
 
const int NUM_EMPLOYEES = 10; 
 
struct Employee { 
    int id; 
    char sex; 
    double hourlyWage; 
    int yearsWithCompany; 
}; 
 
void enterEmployeeInformation(Employee employees[]); 
void sortEmployeeInformation(Employee employees[]); 
void writeEmployeeRecords(const Employee employees[]); 
void readEmployeeRecordsAndCalculatePay(Employee employees[]); 
void updateEmployeeInformation(); 
 
int main() { 
    Employee employees[NUM_EMPLOYEES]; 
 
    // Part 1: Sorting and Writing Employee Information 
    enterEmployeeInformation(employees); 
    sortEmployeeInformation(employees); 
    writeEmployeeRecords(employees); 
 
    // Part 2(a): Calculating Total Pay 
    readEmployeeRecordsAndCalculatePay(employees); 
 
    // Part 2(b): Updating Employee Information 
    updateEmployeeInformation(); 
 
    return 0; 
} 
 
void enterEmployeeInformation(Employee employees[]) { 
    cout << "Enter the information for " << NUM_EMPLOYEES << " employees:" << endl; 
    for (int i = 0; i < NUM_EMPLOYEES; ++i) { 
        cout << "Employee #" << (i + 1) << ":" << endl; 
        cout << "ID: "; 
        cin >> employees[i].id; 
        cout << "Sex (M/F): "; 
        cin >> employees[i].sex; 
        cout << "Hourly Wage: "; 
        cin >> employees[i].hourlyWage; 
        cout << "Years with the Company: "; 
        cin >> employees[i].yearsWithCompany; 
        cout << endl; 
    } 
} 
 
bool compareById(const Employee& emp1, const Employee& emp2) { 
    return emp1.id < emp2.id; 
} 
 
void sortEmployeeInformation(Employee employees[]) { 
    sort(employees, employees + NUM_EMPLOYEES, compareById); 
} 
 
void writeEmployeeRecords(const Employee employees[]) { 
    ofstream outputFile("employee_records.txt"); 
    if (!outputFile) { 
        cerr << "Error opening file: employee_records.txt" << endl; 
        exit(1); 
    } 
 
    for (int i = 0; i < NUM_EMPLOYEES; ++i) { 
        outputFile << employees[i].id << " " << employees[i].sex << " " <<
         employees[i].hourlyWage << " " << employees[i].yearsWithCompany << endl; 
    } 
 
    outputFile.close(); 
} 
 
void readEmployeeRecordsAndCalculatePay(Employee employees[]) { 
    ifstream inputFile("employee_records.txt"); 
    if (!inputFile) { 
        cerr << "Error opening file: employee_records.txt" << endl; 
        exit(1); 
    } 
 
    double totalPay = 0.0; 
    for (int i = 0; i < NUM_EMPLOYEES; ++i) { 
        int id; 
        double hoursWorked; 
        inputFile >> id; 
        inputFile.ignore(); // Ignore the space after the ID 
        cout << "Enter the number of hours worked for Employee " << id << ": "; 
        cin >> hoursWorked; 
        double totalEmployeePay = hoursWorked * employees[i].hourlyWage; 
        totalPay += totalEmployeePay; 
        cout << "Total pay for Employee " << id << ": $" << totalEmployeePay << endl; 
    } 
 
    cout << "Total pay for all employees: $" << totalPay << endl; 
 
    inputFile.close(); 
} 
 
void updateEmployeeInformation() { 
    ifstream inputFile("employee_records.txt"); 
    if (!inputFile) { 
        cerr << "Error opening file: employee_records.txt" << endl; 
        exit(1); 
    } 
 
    Employee employees[NUM_EMPLOYEES]; 
    for (int i = 0; i < NUM_EMPLOYEES; ++i) { 
        inputFile >> employees[i].id >> employees[i].sex >> employees[i].hourlyWage >> employees[i].yearsWithCompany; 
    } 
 
    inputFile.close(); 
 
    cout << "Update the information for " << NUM_EMPLOYEES << " employees:" << endl; 
    for (int i = 0; i < NUM_EMPLOYEES; ++i) { 
        cout << "Employee #" << (i + 1) << ":" << endl; 
        cout << "Hourly Wage: "; 
        cin >> employees[i].hourlyWage; 
        cout << "Years with the Company: "; 
        cin >> employees[i].yearsWithCompany; 
        cout << endl; 
    } 
 
    ofstream outputFile("updated_employee_records.txt"); 
    if (!outputFile) { 
        cerr << "Error opening file: updated_employee_records.txt" << endl; 
        exit(1); 
    } 
 
    for (int i = 0; i < NUM_EMPLOYEES; ++i) { 
        outputFile << employees[i].id<< " " << employees[i].sex << " " 
        << employees[i].hourlyWage << " " << employees[i].yearsWithCompany << endl; 
    } 
 
    outputFile.close(); 
}
