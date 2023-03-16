#include <iostream>
using namespace std;

int main()
{
   int n,first,last,sum;
    cout << " Input any number: ";
    cin >> n;
    first = n;
	last = n % 10;
	for(first = n; first >= 10; first = first/10);
    cout<<" The first digit is s" << first <<endl;
    cout<<" The last digit is "<< last <<endl;
	cout<<" The sum of first and last digit is "<<first + last<<endl;

    return 0;
}