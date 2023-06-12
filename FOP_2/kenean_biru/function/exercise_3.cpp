//demonstration of how to use parameters in a function 

#include <iostream>
using namespace std;

void mult(float num1,float num2);//declare a function with two paarameters with flooat data type with no return value

int main(){
    mult(4,3.5);//calling a fuction with literals

    float num3;
    cout<<"enter a number" ;
    cin>>num3;
    mult(num3,9);//calling a function with a variable and a literal

    float no1,no2;
    cout<<"enter the first number" ;
    cin>>no1;
    cout<<"enter the second number" ;
    cin>>no2;
    mult(no1,no2);//calling a function only by variables
    return 0;
}

void mult(float num1,float num2)//define the function declared before
{
cout <<"the product of the two numbers "<< num1<<" and "<<num2<<" is "<<num1*num2<<endl;//calculate the product
}

