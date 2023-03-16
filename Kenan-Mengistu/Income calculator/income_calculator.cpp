
#include <iostream>
#include <math.h>
using namespace std;
//To calculate net salary

int main() {
    int n;
  double gross_salary, worked_hours, income_tax_rate, overtime_bonus_rate, income;
  double pension_deduction, income_tax_deduction, overtime_payment, net_salary, bonus, gift;
  const double pension_rate = 7;
  cout << "enter the number of people";
  cin >> n;

   for (int i=0; i<n ;i++);
    cout<< "person" <<  << end1;



cout << "Enter gross salary: ";
cin >> gross_salary;

  cout << "Enter worked hours: ";
  cin >> worked_hours;

  cout << " Enter bonus:";
  cin >> bonus;

  cout << " Enter gift:";
  cin >> gift;



  if (worked_hours > 40) {
    cout << "Enter overtime bonus rate/hour: ";
    cin >> overtime_bonus_rate;
    double extra_hours = worked_hours - 40;
    overtime_payment = extra_hours * overtime_bonus_rate;
    }
  else {
    overtime_payment = 0.0;
  }

  pension_deduction = gross_salary * (pension_rate/ 100);
  income = bonus + gift + gross_salary;

  if (income >200 && income < 600 ){
    income_tax_rate= 0.1;
  } else if (income > 600 && income < 1200){
  income_tax_rate= 0.15;}

  else if (income> 1200 && income< 2000){
    income_tax_rate= 0.20;
  }

  else if (income> 2000 && income< 3500){
    income_tax_rate = 0.25;
  }
  else if (income> 3500){
  income_tax_rate = 0.30;}

  else income_tax_rate = 0;


income_tax_deduction= income*income_tax_rate;

  net_salary = (gross_salary - pension_deduction - income_tax_deduction) + overtime_payment;

   cout<< "Net salary: $" << net_salary << endl;

   return 0;
}
