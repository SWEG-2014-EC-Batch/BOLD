//this is a c++program that converts a mark of a course entered from the keyboard to its corresponding letter grade.
#include<iostream>
using namespace std;
int main()
{
    float mark;
    cout<<"enter your mark: ";
    cin>>mark;

    if(mark>=90&& mark<=100)
        cout<<"Your Grade is A+";
    else if(mark>=80&& mark<90)
        cout<<"Your Grade is A";
    else if(mark>=75&& mark<80)
        cout<<"Your Grade is B+";
    else if (mark>=60&& mark<75)
        cout<<" Your Grade is B";
    else if (mark>=55&& mark<60)
        cout<<"Your Grade is C+";
    else if(mark>=45&& mark<55)
        cout<<"Your Grade is C";
    else if(mark>=30&& mark<45)
        cout<<"Your Grade is D";
    else if(mark>=0&& mark<30)
        cout<<"Your Grade is F";
    else
        cout<<"Invalid Mark";
    return 0;
}



