#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, first, last, num_digits;
    cout << "Enter a number: ";
    cin >> n;

    // find the number of digits in n
    num_digits = (int)log10(n) + 1;

    // get the first and last digits
    first = n / pow(10, num_digits - 1);
    last = n % 10;

    // swap the first and last digits
    n -= first * pow(10, num_digits - 1);
    n += last * pow(10, num_digits - 1);
    n -= last;
    n += first;

    cout << "The new number is: " << n;
    return 0;
}
