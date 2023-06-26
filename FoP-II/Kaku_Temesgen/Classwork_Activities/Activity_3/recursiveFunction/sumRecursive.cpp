// A c++ program that finds the sum of all elements in an array using recursive function.
#include <iostream>
using namespace std;

float sum(float arr[], int n);

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    float arr[n];
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    float result=sum(arr, n);
    cout << "The sum of all elements in the array is " << result << endl;
    return 0;
}

float sum(float arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arr[n - 1] + sum(arr, n - 1);
    }
}
