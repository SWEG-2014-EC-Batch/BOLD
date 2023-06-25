// A c++ program that  reverses a user-inputted string using a user-defined function called reverse_string().
#include <iostream>
#include "reverse_string.h"

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string rev_str = reverse_string(str);

    cout << "The original string is: " << str << endl;
    cout << "The reversed string is: " <<rev_str << endl;
    return 0;
}
