/* A c++ program that calculates and displays the power dissipated by resistors in a circuit.
  It uses arrays to store the resistance, current and power values.
  It uses functions to read, calculate and display the results.
  It also calculates and displays the total resistance, current and power in the circuit.*/

#include<iostream>
using namespace std;

const int si=5;
#include <cmath>

void cur(double current[], int );
void pow1(double power[], double resistance[], double current[], int);
void display(double resistance[], double current[], double power[], int si);
void total(double resistance[], double current[], double power[], int si);

int main(){
double resistance[]={16, 27, 39,56,81};
double current[5];
cur(current, si);

double power[5];
pow1(power,resistance,current,si);
cout<<"========================================="<<endl;
display(resistance, current, power, si);
cout<<"========================================="<<endl;
total(resistance, current, power, si);
return 0;

}

void cur(double current[], int si){
 cout<<"Enter the current:"<<endl;
 for(int i=0;i<si;i++){
    cin>>current[i];
 }
}

 void pow1(double power[],double resistance[],double current[], int si){
     for (int i = 0; i < si; i++)
    {
        power[i] = resistance[i] * pow(current[i], 2);
    }
  }

void display(double resistance[], double current[], double power[], int si){

    cout<<"resistance"<<"\t"<<"current"<<"\t\t"<< "power" << endl;
     for (int i = 0; i < si; i++)
    {
        cout << resistance[i] << "\t\t" << current[i] << "\t\t" << power[i] << endl;
    }
  }
void total(double resistance[], double current[], double power[], int si){
    double totalResistance=0;
    double totalCurrent=0;
    double totalPower=0;

    for(int i=0; i<si; i++){
        totalResistance+=resistance[i];
    }

    for(int i=0; i<si; i++){
        totalCurrent+=current[i];
    }
    for(int i=0; i<si; i++){
        totalPower+=power[i];
    }
    cout<<totalResistance<<"\t\t"<<totalCurrent<<"\t\t"<<totalPower<<endl;
}
