//BMI for infinite number of person
#include <iostream>
using namespace std;
int main ()
{
    // Variable declaration
    float h, w, bmi;
    char gender;
    //loop
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
    return 0;

}
