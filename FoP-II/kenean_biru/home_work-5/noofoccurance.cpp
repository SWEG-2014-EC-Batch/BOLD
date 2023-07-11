/*Write a c++ program which prints a table listing the number of occurrences of the lower-case
characters 'a' to 'z' in the file "Sheet5Ex5.cpp". (Save your program in a file of this name so
that you can test it on itself.) Write your program as though your computer is short of
memory - you should declare only one variable of type "ifstream", one variable of type
"char", and two variables of type "int". The program should produce output such as the
following:
CHARACTER OCCURRENCES
a 38
b 5
c 35
d 7
e 58*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("Sheet5Ex5.cpp");
    char character;
    int occurrences[26] = {0};

    while (file >> character) {
        if (character >= 'a' && character <= 'z') {
            occurrences[character - 'a']++;
        }
    }

    cout << "CHARACTER OCCURRENCES\n";
    for (int i = 0; i < 26; i++) {
        std::cout << static_cast<char>('a' + i) << "     " << occurrences[i] << "\n";
    }

    return 0;
}

