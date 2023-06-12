//first and last digit ,and their sum
#include <iostream>
using namespace std;
int main()
{
    int n,first,last, sum;
    cout << " Enter a number: ";
    cin >> n;
    last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<" The first digit of the number is: "<<first<<endl;
    cout<<" The last digit of the number is: "<<last<<endl;
    sum= first + last;
    cout<<"The sum of the first and the last digit is:"<<sum;
    return 0;
}
