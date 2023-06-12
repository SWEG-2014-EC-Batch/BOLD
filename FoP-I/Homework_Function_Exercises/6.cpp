#include<iostream>
#include<math.h> //including the math library inorder to use pow and sqrts
using namespace std;

//a program to calculate the hypotenuse of a right angle triangle

float hypotenuse(double side1,double side2); //declare the function

int main(){double side1;double side2;
    cout <<"welcome,this is a hypotenuse calculator application"<<endl; //welcome message 
    cout <<"enter the first side of the triangle"; //prompt the user to enter the first side
    cin >>side1;
    cout<<"enter the second side of the triangle"; //prompt the user to enter the second side
    cin>>side2;
    hypotenuse(side1 ,side2); //call the fuction to be executed (to calculate the hypotenuse and display the result)
   
   return 0;
}

float hypotenuse(double side1, double side2){
    double squareside3,side3;
    squareside3=pow(side1,2)+pow(side2,2); //calculates the square of the hypotenuse

    side3=sqrt(squareside3); //finds the square root of the squareside3
    return side3;
   
}
