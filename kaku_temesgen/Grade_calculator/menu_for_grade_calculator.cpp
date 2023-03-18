//this is a grade calculator c++ program.
#include<iostream>
using namespace std;

int main()
{
    float mark, test, quiz, project, assignment, final_exam;
    int chances = 2;
    bool success;
        do {
            success = true;
            cout << "Enter your result of TEST out of 15%: ";
            cin >> test;
            if (test > 15 || test < 0) {
                success = false;
                chances--;
            if (chances == 1)
                cout << "Invalid input. You have " << chances << " chance left." << endl;
            else if (chances == 0){
                cout << "Invalid input. You are out of chances." << endl;
                return 0;
            }
            else
                cout << "Invalid input. You have " << chances << " chances left." << endl;
            }
        } while (chances > 0 && !success);

        chances = 2;

        do {
            success = true;
            cout << "Enter your result of QUIZ out of 5%: ";
            cin >> quiz;
            if (quiz > 5 || quiz < 0) {
                success = false;
                chances--;
            if (chances == 1)
                cout << "Invalid input. You have " << chances << " chance left." << endl;
            else if (chances == 0){
                cout << "Invalid input. You are out of chances." << endl;
                return 0;
            }
            else
                cout << "Invalid input. You have " << chances << " chances left." << endl;
            }
        } while (chances > 0 && !success);

        chances = 2;

        do {
            success = true;
            cout << "Enter your result of PROJECT out of 20%: ";
            cin >> project;
            if (project > 20 || project < 0) {
                success = false;
                chances--;
            if (chances == 1)
                cout << "Invalid input. You have " << chances << " chance left." << endl;
            else if (chances == 0){
                cout << "Invalid input. You are out of chances." << endl;
                return 0;
        }
        else
        cout << "Invalid input. You have " << chances << " chances left." << endl;
        }
        } while (chances > 0 && !success);
        chances = 2;
        do {
        success = true;
        cout << "Enter your result of ASSIGNMENT out of 10%: ";
        cin >> assignment;
        if (assignment > 10 || assignment < 0) {
            success = false;
            chances--;
        if (chances == 1)
            cout << "Invalid input. You have " << chances << " chance left." << endl;
        else if (chances == 0){
            cout << "Invalid input. You are out of chances." << endl;
            return 0;
            }
        else
            cout << "Invalid input. You have " << chances << " chances left." << endl;
        }
        } while (chances > 0 && !success);

        chances = 2;

        do {
            success = true;
            cout << "Enter your result of FINAL out of 50%: ";
            cin >> final_exam;
            if (final_exam > 50 || final_exam < 0) {
                success = false;
                chances--;
            if (chances == 1)
                cout << "Invalid input. You have " << chances << " chance left." << endl;
            else if (chances == 0){
                cout << "Invalid input. You are out of chances." << endl;
                return 0;
                }
        else
            cout << "Invalid input. You have " << chances <<" chances left."<< endl;
        }
        } while (chances > 0 && !success);

        mark = (test + quiz + project + assignment + final_exam);
        cout<<"============================="<<endl;

    if (mark >= 90 && mark <= 100)
        cout<<"Your Grade is A+";
    else if (mark >= 80 && mark <90 )
        cout<<"Your Grade is A";
    else if (mark>=75&&mark<80)
       cout<<"Your Grade is B+";
     else if(mark>=60&&mark<75)
       cout<<" Your Grade is B";
     else if(mark>=55&&mark<60)
       cout<<"Your Grade is C+";
     else if(mark>=45&&mark<55)
       cout<<"Your Grade is C";
     else if(mark>=30&&mark<45)
       cout<<"Your Grade is D";
     else if(mark>=0&&mark<30)
       cout<<"Your Grade is F";
     else
      cout<<"Invalid Mark";

      return 0;

}
