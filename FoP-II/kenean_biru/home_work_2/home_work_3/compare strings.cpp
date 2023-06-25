#include <iostream>
#include"compare strings.h"//include the header file user defined function 
using namespace std;




int main() {
    string str1 ,str2;
    cout <<"enter the first string";
    cin>>str1;
    cout <<"enter the second string ";
    cin>>str2;
    
    
    int result = stringCompare(str1, str2);
    
    if (result == 0) {
        cout << "Both strings are equal";
    }
    else if (result == 1) {
        cout << "String 1 is greater than string 2";
    }
    else {
        cout << "String 2 is greater than string 1";
    }
    
    return 0;
}

