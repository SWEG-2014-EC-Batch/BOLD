//BMI for n number of person
#include <iostream>
using namespace std;
int main ()
{
    // Variable declaration
    float h, w, bmi;
    char gender;
    int n;
    cout<<"Enter the number of person:";
    cin>>n;

    for(int i=1; i <= n; i++)
    {
        cout<<"The "<<i<<"th person\n";
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Enter the weight:";
        cin>>w;
        bmi = w/(h*h);
        cout<<"Enter the gender in a capital letter :";
        cin>>gender;
        cout<<"BMI of the person is "<<bmi<<" and the person is ";
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
            }
    }
    return 0;

}
