#include <iostream>
using namespace std;

int main() {
    double gross_salary, worked_hours, overtime_rate, overtime_bonus, pension, income_tax, net_salary;
    const double PENSION_RATE = 0.07;
    int n;
    cout << "Enter the number of people: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
         cout << "Person " << i << endl;
        cout << "Enter gross salary: ";
        cin >> gross_salary;
     cout << "Enter worked hours: ";
    cin >> worked_hours;

    pension = gross_salary * PENSION_RATE;

    if (worked_hours > 40) {
        cout << "Enter overtime bonus rate/hour: ";
        cin >> overtime_rate;
        overtime_bonus = (worked_hours - 40) * overtime_rate;
    } else {
        overtime_bonus = 0.0;
    }
if (gross_salary>=0 && gross_salary<=200) {income_tax= 0;}
else if (gross_salary >= 200 && gross_salary <= 600) {income_tax= 0.01;}
else if (gross_salary >= 600 && gross_salary <= 1200) {income_tax =0.15;}
else if (gross_salary >= 1200 && gross_salary <= 2000) {income_tax =0.15;}
else if (gross_salary >= 2000 && gross_salary <= 3500) {income_tax =0.20;}
else {income_tax =0.15;}
   
    net_salary = (gross_salary - pension - (gross_salary * income_tax)) + overtime_bonus;

    cout << "Net salary: " << net_salary << endl;
    }
    return 0;
}
