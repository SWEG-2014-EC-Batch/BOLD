//palindrome number
#include <iostream>
using namespace std;
int main()
{
    int n, original_num, reverse_num = 0, r;
    cout << "Enter a number: ";
    cin >> n;

    original_num = n;
    while (n != 0) {
        r = n % 10;
        reverse_num = reverse_num * 10 + r;
        n /= 10;
    }

    if (original_num == reverse_num) {
        cout << "The number is a palindrome!";
    } else {
        cout <<"The number is not a palindrome.";
    }
    return 0;
}
