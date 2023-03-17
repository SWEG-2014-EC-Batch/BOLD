#include<iostream>
#include<math.h>
using namespace std;
int main()
{float n,t,q,p,a,f;
cout <<"enter your test score out of 15";
cin>>t;


cout<<endl;

cout<<"enter your quiz result out of 5";
cin>>q;
cout<<endl;


cout<<"enter your project result out of 20";
cin>>p;
cout<<endl;



cout<<"enter your assigment result out of 10";
cin>>a;
cout<<endl;


cout<<"enter your final result out of 50";
cin>>f;
cout<<endl;


n=t+q+p+a+f;
if(n<=100 && n>=90){cout<<"A+";}
else if(n<=90 && n>=80){cout<<"A";}
else if(n<=80&& n>=75){cout<<"B+";}
else if(n<=75&& n>=60){cout<<"B";}
else if(n<=60&& n>=55){cout<<"C+";}
else if(n<55&& n>=45){cout<<"C";}
else if(n<45 && n>=30){cout<<"D";}
else if (n<=30 && n>=0){cout<<"F";}
else{cout<<"incorrect input";}

return 0; 
}