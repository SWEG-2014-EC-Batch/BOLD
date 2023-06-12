#include<iostream>
using namespace std;

int main()
{
    int test, assignment, project, quiz, finalExam = 0;
    cout << "Enter your test, assignment, project quiz and Final Exam respectively."
    cin >> test >> assignment >> project >> quiz >> finalExam;

    int mark = test + assignment + project + quiz + finalExam;

    if(mark >= 90)
        cout<<"You got A+";
    else if(mark >= 80 && mark < 90)
        cout<<"You got A";
    else if(mark >= 75 && mark < 80)
        cout<<"You got B+";
    else if (mark >= 60 && mark < 75)
        cout<<" You got B";
    else if (mark >= 55 && mark < 60)
        cout<<"You got C+";
    else if(mark >= 45 && mark < 55)
        cout<<"You got C";
    else if(mark >= 30 && mark < 45)
        cout<<"You got D";
    else if(mark >= 0 && mark < 30)
        cout<<"You got F";
    else
        cout<<"Invalid Mark";
    return 0;
}
