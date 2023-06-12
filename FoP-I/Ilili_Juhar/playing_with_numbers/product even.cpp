//product of even digits
#include <iostream>
using namespace std;
int main()
{
    int n, even_product = 1, r;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        r = n % 10;
        if (r % 2 == 0) {
            even_product *= r;
        }
        n /= 10;
    }
    cout << "The product of the even digits of the entered number is: " << even_product;
    return 0;
}
