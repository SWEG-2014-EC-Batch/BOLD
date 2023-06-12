// A c++ program to demonstrate a function that has return but has no parameter(s).
#include <iostream>
using namespace std;

float product();// Function declaration

int main() {
    float result = product();
    cout<<"The product is " << result <<endl;
    return 0;
}
//Function definition
float product() {
    float num1, num2;
    cout<<"Enter the first floating-point number: ";
    cin>>num1;
    cout<<"Enter the second floating-point number: ";
    cin>>num2;
    // Calculate and return the result of multiplying the two numbers entered by the user
    return num1 * num2;
}
