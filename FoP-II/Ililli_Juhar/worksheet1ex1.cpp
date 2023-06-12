#include <iostream>
using namespace std;
float mult(float num1, float num2);
int main()       
{ 
    
    float x, y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the  number: ";
    cin>>y;
    cout<<"The product of the numbers is "<<mult(x,y);
    return 0;
}

float mult(float num1, float num2){
    
    return num1*num2;
}