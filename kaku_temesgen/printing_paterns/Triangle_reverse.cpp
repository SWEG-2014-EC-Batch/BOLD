// this is a c++ program that prints the triangle of stars in reverse.
#include <iostream>
using namespace std;
int main()
{
int i,k;
int rows;

cout<<"enter number of row";
cin>>rows;

{
	for (int i=rows; i>=1; i--)
	{
		for(k=1; k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<endl;

}
}


	return 0;


}
