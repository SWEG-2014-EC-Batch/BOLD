// A c++ program that uses a recursive function to get the nth Fibonacci number.
#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int sum=fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << sum;
    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
