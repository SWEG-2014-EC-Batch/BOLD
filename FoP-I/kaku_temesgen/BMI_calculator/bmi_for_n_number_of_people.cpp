// this is a c++ program to calculate BMI for n number of people.
#include <iostream>
#include<math.h>
using namespace std;
int main ()
{

float height,weight,bmi;
char gender;
int n;
int i;
cout<<"enter the number of people: ";
cin>>n;
for(int i=0; i<n; i++){
	cout<<endl<<"enter details of person: "<<i
	<<endl;
cout<<" gender (m or f): ";
cin>>gender;
cout<<"height: ";
cin>>height;
cout<<" weight: ";
cin>>weight;
bmi=weight/(height*height);
cout<<endl<<bmi<<endl;
cout<<"bmi of person"<<i<<"is"<<bmi<<"\n";


if ((gender='f')&&(bmi>23)){
	cout<<"person"<<i<<" is overweight"<<endl;
}
else if(bmi<18){
cout<<"person"<<i<<"is under weight"<<endl;
}
else if(bmi>=18 && bmi<=23){
	cout<<"person"<<i<<" is fit"<<endl;
}
else if ((gender='m')&&(bmi>25)){
	cout<<"person"<<i<<" is overweight"<<endl;
}
	else if(bmi<20){
		cout<<"person"<<i<<" is underweight"<<endl;
	}
		else if(bmi>=20 && bmi<=25){
			cout<<"person"<<i<<" is fit";
		}
}

return 0;

}

