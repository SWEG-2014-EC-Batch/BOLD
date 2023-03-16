#include <iostream>
using namespace std;

int main() {
    int num, product = 1, value;
    cout << "Enter any number: ";
    cin >> num;

    while(num != 0) {
        value = num % 10;
        if(value % 2 == 0) {   
            product *= value;
        }
        num /= 10;
    }

    cout << "The Product of the even digits equals: " << product;
    return 0;
}