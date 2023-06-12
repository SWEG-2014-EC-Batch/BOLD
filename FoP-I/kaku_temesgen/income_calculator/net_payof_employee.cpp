#include <iostream>
using namespace std;
int main() {
    double grossSalary, workedHours, incomeTaxRate, overtimeBonusRate, netSalary;
    const double PENSON_RATE = 0.07;

    cout << "Enter your gross salary: ";
    cin >> grossSalary;

    cout << "Enter your worked hours: ";
    cin >> workedHours;

    cout << "Enter your income tax rate: ";
    cin >> incomeTaxRate;

    if(workedHours>40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtimeBonusRate;
        double overtimePayment = (workedHours - 40) * overtimeBonusRate;
        netSalary = (grossSalary - (grossSalary * PENSON_RATE) - (grossSalary * incomeTaxRate)) + overtimePayment;
    }
    else {
        netSalary = (grossSalary - (grossSalary * PENSON_RATE) - (grossSalary * incomeTaxRate));
    }

    cout << "Net salary: " << netSalary << endl;

    return 0;
}
