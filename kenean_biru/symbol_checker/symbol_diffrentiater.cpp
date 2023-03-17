//bmi_calculator
#include<iostream>
using namespace std;
int main()
{
	char n;
	cout<<"enter the  symbol to be differentiated";
	cin>>n;
	
	 if(n>='0' && n<='9') {
		if(n%2==0){
			cout<< "it is even";}
	
	
	 else {cout<<"it is odd";}}
   else if (n>='a' && n<='z'){
	cout<<"it is lower case";
}
else if (n>='A' && n<='Z'){
	cout<<"it is upper case";}
	else {cout<<" it is special character";
	
}
	
	
	return 0;
	
}

	
    
	
	

	



  