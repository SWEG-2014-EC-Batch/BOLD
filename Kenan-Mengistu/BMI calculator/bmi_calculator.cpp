#include<iostream> 
#include<cmath> 
 
using namespace std; 
 
int main() 
{ 
double weight, height, BMI;  
cout << "Enter your weight: "; 
cin >> weight; 
cout << "\nEnter your height: "; 
cin >> height; 
 
BMI = (weight) / (height * height); 
 
if(BMI < 18.5) 
cout << "You are underweight\n\n"; 
if(BMI >= 18.5 && BMI <= 25) 
cout << "You are in optimal shape \n\n"; 
if(BMI > 25) 
cout << "You are overweight \n\n"; 
  
return 0; 
} 