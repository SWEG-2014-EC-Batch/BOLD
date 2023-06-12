//demonstration for declaration & defination of a function separetly(recommendable) and calling of a function
//a function to print a welcome message
#include<iostream>
using namespace std;
void first();//declare  the function

int main() {
    first();//call the fuction 
    return 0;
}
void first()//define the function declared earlier
{
    string name;
    cout <<"please, enter your name ";
    cin >>name ;
    cout <<"hello,"<<name<<endl<<"welcome to modular programming ";
} 

