//demonstration of struct initialization and reading fron user
#include <iostream>
using namespace std;
struct phone {//define the structure
    int areacode;
    int exchanger;
    int no;
};

int main(){
phone number1={251,974,6965};//initialize the first struct variable
phone number2;//read the other struct from the user
cout<<"enter the area code";
cin>>number2.areacode;
cout<<"enter the exchanger";
cin>>number2.exchanger;
cout<<"enter the final number";
cin>>number2.no;
 
 cout <<"the phone number intialized is "<<number1.areacode<<"-"<<number1.exchanger<<number1.no;//display
 cout<<endl;
 cout<<"the phone number you entered is "<<number2.areacode<<"-"<<number2.exchanger<<number2.no;
 return 0;
}
