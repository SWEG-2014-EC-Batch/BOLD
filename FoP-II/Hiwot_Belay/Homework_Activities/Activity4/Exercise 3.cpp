#include <iostream>
using namespace std;

struct phone {
    int areacode;
    int exchanger;
    int no;
};

int main(){
  
phone number1={251,974,6965};
phone number2;
  
cout<<"Enter the area code: ";
cin>>number2.areacode;
cout<<"Enter the exchanger: ";
cin>>number2.exchanger;
cout<<"Enter the final number: ";
cin>>number2.no;
 
 cout <<"the phone number intialized is "<<number1.areacode<<"-"<<number1.exchanger<<number1.no;
 cout<<endl;
 cout<<"the phone number you entered is "<<number2.areacode<<"-"<<number2.exchanger<<number2.no;
 return 0;
}
