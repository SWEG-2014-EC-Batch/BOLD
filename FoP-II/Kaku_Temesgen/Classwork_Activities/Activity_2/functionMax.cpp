/* A function based c++ program that takes either two or three parameters of type
  double and returns the largest of them.
  Purpose: Demonstrate function overloading.*/

#include <iostream>
using namespace std;

double max(double num1, double num2);
double max(double num1, double num2, double num3);

int main(){
    double num1,num2,num3;
    cout<<"Enter two numbers to find the maximum number:"<<endl;
    cin>>num1>>num2;
    double maximum;

    maximum=max(num1,num2); // calling max() function with two parameters
    cout<<"The maximum of the two numbers is:"<<maximum<<endl;
    cout<<"Enter three numbers to find the maximum number:"<<endl;
    cin>>num1>>num2>>num3;

    maximum=max(num1,num2,num3);// calling max() function with three parameters
    cout<<"The maximum of the three numbers is:"<<maximum<<endl;
    return 0;
    }
double max(double num1, double num2){
if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
double max(double num1, double num2, double num3){
if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }

}



