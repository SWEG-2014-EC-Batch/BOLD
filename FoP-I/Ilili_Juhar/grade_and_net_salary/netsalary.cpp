// Net salary payment
#include <iostream>
using namespace std;
int main()
{
    double gross_salary, income_tax, pension, worked_hour,over_time, bonus_rate;
    double gift, tax_rate, total_income, net_salary;
    const double pension_rate = 0.07;
    cout<<"Enter the gross salary of the employee:";
    cin>>gross_salary;
    cout<<"Enter the worked hour:";
    cin>>worked_hour;
    cout<<"Enter the gift if there is any:";
    cin>>gift;
        if(worked_hour>40){
        cout<<"Enter the over time bonus rate per hour:";
        cin>>bonus_rate;
        over_time= (worked_hour - 40)*over_time;
            }
        else {
            over_time=0;
            }
    total_income=(gross_salary + over_time + gift);
    if(total_income>=0 && total_income<=200){
        tax_rate=0;
    }
    else if(total_income>=201 && total_income<= 600){
        tax_rate=0.1;
    }
    else if(total_income>=601 && total_income<=1200){
        tax_rate=0.15;
    }
    else if(total_income>=1201 && total_income<=2000){
        tax_rate=0.2;
    }
    else if(total_income>=2000 && total_income<=3500){
        tax_rate=0.25;
    }
    else{
        tax_rate=0.3;
    }
    pension= gross_salary*pension_rate;

        income_tax=(total_income)*tax_rate;
        net_salary=(gross_salary - pension - income_tax + over_time + gift);
        cout<<"The employee's net salary is "<<net_salary<<"Birr";

return 0;
}
