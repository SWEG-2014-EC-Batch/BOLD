#include <iostream>
using namespace std;

// a program that converts feet and inch to meter and cm

float input1(float *m, float *cm);
float input2(float *feet, float *inch);
float process1(float *feet, float *inch);
float process2(float *m, float *cm);
float output1();
float output2();

int main()
{
    int choice;
    do
    {
        // do while loop to repeat the program until quit is chosen
        cout << "Welcome to the converter program!" << endl;
        cout << "choose 1. to convert from meter and cm to feet and inches" << endl;
        cout << "choose 2. to convert from feet and inches to meter and cm" << endl;
        cout << "choose 3. to quit the program" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            output1(); // call function output1
            break;
        case 2:
            output2(); // call the function output2
            break;
        case 3:
            cout << "The progarm has ended";
            return 0;
            break;
        default:
            cout << "No such choice!";
        }
    } while (choice <= 3);
}

float input1(float *m, float *cm)
{ // the input function(enter values) to convert meter and cm to feet and inches with parameters passed by pointer

    cout << "enter the magnitude in meter";
    cin >> *m; // to store the value entered on the adress given
    cout << "enter the magnitude in cm";
    cin >> *cm;
}
float input2(float *feet, float *inch)
{ // the input(enter values) function to convert  feet and inches to meters and cm with parameters passed by pointer

    cout << "enter the magnitude in feet";
    cin >> *feet;
    cout << "enter the magnitude in inch";
    cin >> *inch;
}
float process1(float *feet, float *inch)
{ // the calculater function have parameters passed by pointer
    float m, cm;
    input1(&m, &cm); // call the input1 function
    *feet = m * 3.2; // calculate and put the result on the memory address of the parameter
    *inch = cm * 0.39;
}

float process2(float *m, float *cm)
{ // the calculater function have parameters passed by pointer
    float feet, inch;
    input2(&feet, &inch); // call the input2 function
    *m = feet * 0.3125;   // calculate and put the result on the memory address of the parameter
    *cm = inch * 2.54;
}
float output1()
{
    float feet, inch;
    process1(&feet, &inch); // call the function process1

    cout << "The magnitude in feet is:  " << feet << endl
         << "The magnitude in inches is:  " << inch << endl;
}
float output2()
{
    float m, cm;
    process2(&m, &cm); // call the function process2
  
    cout << "The magnitude in meters is:  " << m << endl
         << "The magnitude in cm is:  " << cm << endl;
}
