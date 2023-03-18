//this is a c++ program to calculate BMI.
#include <iostream>
#include<math.h>
#include <climits>
#define inf INT_MAX
using namespace std;
int main ()
{

float height,weight,bmi;
char gender;
int m,choice;
do{
cout<<"\t \n ******** MENU ******\n";
cout<<"\t \n 1. For 'ONE' Person";
cout<<"\t \n 2. For 'N' person";
cout<<"\t \n 3. For 'INFINITE' person";
cout<<"\t \n 4. Exit program \n ";
cout<<"\t \n ===================\n Please Enter Your Choice : ";
cin>>choice;
switch(choice){
    case 1:{
        cout<<"\n Enter details of the person: "<<endl;
    cout<<" Gender (M or F): ";
    cin>>gender;
    cout<<" Height in (m) : ";
    cin>>height;
    cout<<" Weight in (Kg): ";
    cin>>weight;
    bmi=weight/(height*height);
    cout<<" BMI of the person is :"<<bmi<<"\n";

    if ((gender='f')&&(bmi>23)){
     cout<<" The person is overweight "<<endl;
    }
    else if(bmi<18){
    cout<<" The person is underweight "<<endl;
    }
    else if(bmi>=18 && bmi<=23){
     cout<<"The person is fit "<<endl;
    }
    else if ((gender='m')&&(bmi>25)){
     cout<<" The person is overweight"<<endl;
    }
     else if(bmi<20){
      cout<<"The person is underweight"<<endl;
     }
      else if(bmi>=20 && bmi<=25){
       cout<<"The person is fit";
      }
      cout<<"\n--------- DONE! ---------\n\n";

    }break;

case 2: {int n;
    cout<<" Enter The 'N' number of people You wanna calculate \n";
    cin>>n;
        for(int i=1; i<=n; i++){
    cout<<"\n Enter details of person: "<<i<<endl;
    cout<<" Gender (M or F): ";
    cin>>gender;
    cout<<" Height in (m) : ";
    cin>>height;
    cout<<" Weight in (Kg): ";
    cin>>weight;
    bmi=weight/(height*height);
    cout<<" BMI of person "<<i<<" is : "<<bmi<<"\n";

    if ((gender='f')&&(bmi>23)){
     cout<<" Person "<<i<<" is overweight "<<endl;
    }
    else if(bmi<18){
    cout<<" Person "<<i<<" is under-weight "<<endl;
    }
    else if(bmi>=18 && bmi<=23){
     cout<<" Person "<<i<<" is fit "<<endl;
    }
    else if ((gender='m')&&(bmi>25)){
     cout<<" Person "<<i<<" is overweight"<<endl;
    }
     else if(bmi<20){
      cout<<" Person "<<i<<" is underweight"<<endl;
     }
      else if(bmi>=20 && bmi<=25){
       cout<<"person "<<i<<" is fit";
      }
      cout<<"\n---------------------------\n";
    }
    } break;

case 3:{
        cout<<"\n You're calculating for infinite number of people "<<endl;
        for(int i=1; i<=inf; i++){
    cout<<"\n Enter details of person: "<<i<<endl;
    cout<<" Gender (M or F): ";
    cin>>gender;
    cout<<" Height in (m) : ";
    cin>>height;
    cout<<" Weight in (Kg): ";
    cin>>weight;
    bmi=weight/(height*height);
    cout<<" BMI of person "<<i<<" is : "<<bmi<<"\n";

    if ((gender='f')&&(bmi>23)){
     cout<<" Person "<<i<<" is overweight "<<endl;
    }
    else if(bmi<18){
    cout<<" Person "<<i<<" is under-weight "<<endl;
    }
    else if(bmi>=18 && bmi<=23){
     cout<<" Person "<<i<<" is fit "<<endl;
    }
    else if ((gender='m')&&(bmi>25)){
     cout<<" Person "<<i<<" is overweight"<<endl;
    }
     else if(bmi<20){
      cout<<" Person "<<i<<" is underweight"<<endl;
     }
      else if(bmi>=20 && bmi<=25){
       cout<<"person "<<i<<" is fit";
      }
      cout<<"\n---------------------------\n";
        }
      }  break;
      case 4:{cout<<"\n--- Thank you ---\n";
           exit;
      }break;

      default:
        cout<<"\n WRONG CHOICE PLEASE TRY AGAIN!.. \n";
}
}while (choice != 4);

    return 0;


}








