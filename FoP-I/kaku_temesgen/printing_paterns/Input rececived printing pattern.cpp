//this is a c++ program that receives input from user and prints stars in a pattern.
#include <iostream>
using namespace std;
int main()

{
	int a,b;
cout<<"enter number of row";
cin>>a;
cout<<"enter number of column";
cin>>b;

{
	for (int k=1; k<=a; k++)

	{
		for(int i=1;i<=b;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}


	return 0;


}
