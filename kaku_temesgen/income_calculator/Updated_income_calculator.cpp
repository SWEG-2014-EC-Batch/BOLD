#include <iostream>
using namespace std;
int main() {
    double grossSalary, workedHours, incomeTaxRate, overtimeBonusRate,regularSalary, netSalary,overtimePayment;
    const double PENSION_RATE = 0.07 * grossSalary;

    cout << "Enter your gross salary: ";
    cin >> grossSalary;

    cout << "Enter your worked hours: ";
    cin >> workedHours;

    cout << "Enter your income tax rate: ";
    cin >> incomeTaxRate;

    if(workedHours>40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtimeBonusRate;
           overtimePayment = (workedHours -40 ) * overtimeBonusRate;
    }
    else {
        overtimePayment = 0;
    }

     if (grossSalary <= 200) {
        incomeTaxRate = 0;
    } else if (grossSalary > 200 && grossSalary <= 600) {
        incomeTaxRate = 0.1 * (grossSalary - 200);
    } else if (grossSalary > 600 && grossSalary <= 1200) {
        incomeTaxRate = 0.1 * 400 + 0.15 * (grossSalary - 600);
    } else if (grossSalary > 1200 && grossSalary <= 2000) {
        incomeTaxRate = 0.1 * 400 + 0.15 * 600 + 0.2 * (grossSalary - 1200);
    } else if (grossSalary > 2000 && grossSalary <= 3500) {
        incomeTaxRate = 0.1 * 400 + 0.15 * 600 + 0.2 * 800 + 0.25 * (grossSalary - 2000);
    } else {
        incomeTaxRate = 0.1 * 400 + 0.15 * 600 + 0.2 * 800 + 0.25 * 1500 + 0.3 * (grossSalary - 3500);
    }

    regularSalary = grossSalary - PENSION_RATE - incomeTaxRate;

    netSalary = regularSalary + overtimePayment;

    cout<<"\n========  CALCULATED ========\n";
    cout << "\n Pension deduction: "<< PENSION_RATE;
    cout << "\n Tax deduction: " << incomeTaxRate<<" Br";
    cout << "\n Regular salary: " << regularSalary<<" Br";
    cout << "\n Overtime payment: " << overtimePayment<<" Br";
    cout << "\n Netsalary: " << netSalary<<" Br \n";

    return 0;
}
