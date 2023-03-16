//reverse the number
#include <iostream>
using namespace std;
int main()
{
    int n, reverse_num=0, r;
    cout<<"Enter the number:";
    cin>>n;
    while (n != 0) {
        r = n % 10;
        reverse_num = reverse_num * 10 + r;
        n /= 10;
    }
    cout << "The reverse of the number is: " << reverse_num;
    return 0;
}
