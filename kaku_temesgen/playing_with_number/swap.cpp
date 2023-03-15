//this is a c++ program that swap the first and the last digit of the number.
#include <iostream>
using namespace std;

int main() {
    int num, temp, first, last, digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    last = num % 10;
    while(num >= 10) {
        num /= 10;
    }
    first = num;

    temp = last;
    last = first;
    first = temp;

    temp = last;
    for(int i=1; i<digits-1; i++) {
        temp = (temp*10) + ((num /10) % 10);
        num /= 10;
    }
    temp = (temp*10) + first;


    cout << "Swapped number: " << temp;

    return 0;
}
