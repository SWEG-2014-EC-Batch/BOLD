#include <iostream> 
#include <fstream> 
#include <string> 
 
using namespace std; 
 
const int MAX_EMPLOYEES = 4; 
 
struct Employee { 
    string name; 
    double payRate; 
    int hours; 
    double regularPay; 
    double overtimePay; 
    double grossPay; 
}; 
 
void readEmployeeData(Employee employees[]); 
void calculatePayReport(Employee employees[]); 
void displayPayReport(const Employee employees[]); 
 
int main() { 
    Employee employees[MAX_EMPLOYEES]; 
 
    readEmployeeData(employees); 
    calculatePayReport(employees); 
    displayPayReport(employees); 
 
    return 0; 
} 
 
void readEmployeeData(Employee employees[]) { 
    ifstream inputFile("employee_payReport.txt"); 
    if (!inputFile) { 
        cout << "Error opening file: employee_payReport.txt" << endl; 
        return; 
    } 
 
    for (int i = 0; i < MAX_EMPLOYEES; ++i) { 
        inputFile >> employees[i].name; 
        inputFile >> employees[i].payRate; 
        inputFile >> employees[i].hours; 
    } 
 
    inputFile.close(); 
} 
 
void calculatePayReport(Employee employees[]) { 
    for (int i = 0; i < MAX_EMPLOYEES; ++i) { 
        if (employees[i].hours <= 40) { 
            employees[i].regularPay = employees[i].hours * employees[i].payRate; 
            employees[i].overtimePay = 0.0; 
        } else { 
            employees[i].regularPay = 40 * employees[i].payRate; 
            employees[i].overtimePay = (employees[i].hours - 40) * (1.5 * employees[i].payRate); 
        } 
        employees[i].grossPay = employees[i].regularPay + employees[i].overtimePay; 
    } 
} 
 
void displayPayReport(const Employee employees[]) { 
    double totalRegularPay = 0.0; 
    double totalOvertimePay = 0.0; 
    double totalGrossPay = 0.0; 
 
    cout << "Pay Report:" << endl; 
    cout << "Name          Rate  Hours  Regular Pay  Overtime Pay  Gross Pay" << endl; 
 
    cout.precision(2); 
    cout.setf(ios::fixed); 
 
    for (int i = 0; i < MAX_EMPLOYEES; ++i) { 
        cout.width(15); 
        cout << left << employees[i].name; 
        cout.width(6); 
        cout << left << employees[i].payRate; 
        cout.width(6); 
        cout << left << employees[i].hours; 
        cout.width(13); 
        cout << left << employees[i].regularPay; 
        cout.width(14); 
        cout << left << employees[i].overtimePay; 
        cout.width(11); 
        cout << left << employees[i].grossPay << endl; 
 
        totalRegularPay += employees[i].regularPay; 
        totalOvertimePay += employees[i].overtimePay; 
        totalGrossPay += employees[i].grossPay; 
    } 
 
    cout << endl; 
    cout << "Totals:" << endl; 
    cout << "Regular Pay: $" << totalRegularPay << endl; 
    cout << "Overtime Pay: $" << totalOvertimePay << endl; 
    cout << "Gross Pay: $" << totalGrossPay << endl; 
}
