/* A function based C++ program that find the Fibonacci series of a given
number. The function is called both with parameter and without parameter.
Purpose: Demonstrate default arguments
*/

#include <iostream>
using namespace std;

int fibonacci(int n = 20); // default argument(s) are added in function declaration


int main() {
    cout<<"Fibonacci series up to 20 are: ";
    fibonacci(); //calling function with default argument without parameter(s)
    cout<<endl;
    int n;
    cout <<"Enter the limit to generate Fibonacci series:  ";
    cin >> n;
    cout << "Fibonacci Series up to "<<n<< " are: ";
    fibonacci(n); //calling function with parameter(s)
    return 0;
}

int fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if (nextTerm > n)
            break;
        cout << nextTerm << " ";
    }
    return nextTerm;
}
