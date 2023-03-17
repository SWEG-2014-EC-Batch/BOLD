#include <iostream>
using namespace std;
int main ()
{
    // Variable declaration
    float h, w, bmi;
    char gender;
    int option;
    cout<<"Choose from the option below\n";
    cout<<"1. BMI for one person\n";
    cout<<"2. BMI for 'n' number of people\n";
    cout<<"3. BMI for unknown number of people\n";
    cin>>option;
    switch(option){
    case 1:{
        cout<<"1. BMI for one person\n";
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Enter the weight:";
        cin>>w;
        bmi = w/(h*h);
        cout<<"Enter the gender in a capital letter:";
        cin>>gender;
        switch(gender){
         cout<<"The BMI is "<<bmi<<" and the person is ";
        case 'M':{
            if(bmi>25)
                cout<<"Overweight\n";
            else if(bmi<=25 && bmi>=20)
                cout<<"Normal\n";
            else
                cout<<"Underweight\n";
            break;
                    }
        case 'F':{
            if(bmi>23)
                cout<<"Overweight\n";
            else if(bmi<=23 && bmi>=18)
                cout<<"Normal\n";
            else
                cout<<"Underweight\n";
                break;
                    }
        default:{
            cout<<"You have entered invalid gender, please try again\n";}
            }
         break;
    }
    case 2:{
        cout<<"2. BMI for 'n' number of people\n";
        int n;
        cout<<"Enter the number of person that you wan to calculate their BMI:";
        cin>>n;
    for(int i=1; i <= n; i++)
         {
        cout<<"The "<<i<<"th person\n";
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Enter the weight:";
        cin>>w;
        bmi = w/(h*h);
        cout<<"Enter the gender in a capital letter:";
        cin>>gender;
        cout<<"The BMI is "<<bmi<<" and the person is ";
        switch(gender){
            case 'M':{
                if(bmi>25)
                cout<<"Overweight\n";
                else if(bmi<=25 && bmi>=20)
                cout<<"Normal\n";
                else
                cout<<"Underweight\n";
                break;
                }
          case 'F':{
              if(bmi>23)
                cout<<"Overweight\n";
              else if(bmi<=23 && bmi>=18)
                cout<<"Normal\n";
              else
                cout<<"Underweight\n";
                break;
                }
        default:{
            cout<<" invalid gender to determine the BMI range, please try again\n";}
            }
        }
       break;
    }
    case 3:{
        cout<<"3.BMI for unknown number of people";
        for(int n = 0; n >= 0; n++)
        {
        cout<<"The "<<n+1<<"th person\n";
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Enter the weight:";
        cin>>w;
        bmi = w/(h*h);
        cout<<"Enter the gender in a capital letter:";
        cin>>gender;
            switch(gender){
             cout<<"BMI of the person is "<<bmi<<" and the person is ";
             case 'M':{
                if(bmi>25)
                    cout<<"Overweight\n";
                else if(bmi<=25 && bmi>=20)
                    cout<<"Normal\n";
                else
                    cout<<"Underweight\n";
                break;
                    }
            case 'F':{
                if(bmi>23)
                    cout<<"Overweight\n";
                else if(bmi<=23 && bmi>=18)
                    cout<<"Normal\n";
                else
                    cout<<"Underweight\n";
                break;
                    }
            default:{
            cout<<"You have entered invalid gender, please try again\n";}
            }
        }
        break;
    }
    default:{
            cout<<"You have entered invalid number, please try again\n";}
            }
    return 0;
    }
