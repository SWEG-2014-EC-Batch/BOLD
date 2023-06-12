//demonstration for declaration & defination of a function together(not recommendable) and calling of a function
//a function to print a welcome message
#include<iostream>
using namespace std;
void first()//declare and define the function
{
    string name;
    cout <<"please, enter your name ";
    cin >>name ;
    cout <<"hello,"<<name<<endl<<"welcome to modular programming ";
} 
int main() {
    first();//call the fuction 
    return 0;
}
