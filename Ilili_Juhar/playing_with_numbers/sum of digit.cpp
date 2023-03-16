//sum of digits
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = n; i != 0; i /= 10) {
        sum += i % 10;
    }

    cout << "The sum of the digits of the number is: " << sum;
    return 0;
}
