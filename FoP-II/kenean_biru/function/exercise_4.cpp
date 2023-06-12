//demonstartion of how to work with a function with return but no parameter
//a function to return the product of two numbers
#include<iostream>
using namespace std;

float product();// declare the function with no parameter but return

int main (){
cout <<"the product of the two numbers is "<<product();//call the fuction directly to be printed

return 0;
}

float product(){ //define the function
    float no1,no2,product;
    
    cout <<"enter the first number";
    cin>>no1;
    cout <<"enter the second number";
    cin>>no2;
    product=no1*no2;

    return product;//return the variable containing the product
}
