#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    
    char input;

    cout << "Enter your input:";
    cin >> input;

    if (isupper(input))
        cout << input << " is an upperCase character\n";
  
    else if (islower(input))
        cout << input << " is a lowerCase character\n";
  
    else if(isdigit(input) && input % 2 == 0)
        cout << input << " is an even number\n";
    
    else if(isdigit(input) && input % 2 != 0)
        cout << input << " is an odd number\n";
    
    else
        cout << input << " is a special character\n";

    return 0;
}