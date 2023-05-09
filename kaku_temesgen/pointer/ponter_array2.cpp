// Program to print 2-D array elements using a pointer in C++
#include <iostream>
using namespace std;

int main() {
    // Declare the array and initialize it using a pointer
    int arr[2][3] = {45, 67, 75, 64, 83, 59};
    int *ptr = &arr[0][0];

    // Print the array contents using a loop and the pointer
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << *(ptr + (i*3 + j)) << " "; // Print the current element pointed to by 'ptr'
        }
        cout << endl; // Move to the next line after printing all elements in a row
    }

    return 0;
}
