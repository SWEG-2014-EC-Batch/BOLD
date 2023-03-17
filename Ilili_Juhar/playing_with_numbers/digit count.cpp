//count number of digits
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << " Enter an integer :  ";
    cin >> n;
    while (n != 0)
    {
        n /= 10; //to get the number except the last digit.
        count++; //when divided by 10, updated the count of the digits
    }

    cout << "The number of digits in the entered number is " << count;
    return 0;
}
