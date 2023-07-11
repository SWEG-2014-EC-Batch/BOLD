//demostration of structure use in phone number with 3 parts

#include <iostream>
using namespace std;
struct phone {
    int areacode;
    int exchanger;
    int no;
};

struct whole{
    char name[10];
    phone number;
};
int main(){whole person;
int i;
    for (int i=0;i<10;i++){
        cout<<"enter the "<<i+1<<" person name ";
        cin>>person.name;
      cout<<"enter the "<<i+1<<" area code ";
      cin>>person.number.areacode;
      cout<<"enter the "<<i+1<<" exchanger ";
      cin>>person.number.exchanger;
      cout<<"enter the "<<i+1<<" final number ";
      cin>>person.number.no;}
for (int i=0;i<10;i++){
      cout<<person.name<<"  "<<person.number.areacode<<"  "<<person.number.exchanger<<"  "<<person.number.no<<"\n";
    }

}
