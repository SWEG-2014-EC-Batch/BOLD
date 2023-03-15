//this is a c++ program that reverses a number entered from the keyboard.
#include<iostream>
using namespace std;
int main(){
	int num, reversed=0,remainder;
	cout<<"Enter a number";
	cin>>num;
	while(num!=0){
		remainder= num%10;
		reversed=reversed*10+remainder;
		num/=10;
	}
	cout<<" The reversed number is"<<" "<<reversed<<endl;
	return 0;

}
