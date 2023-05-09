// c++ program that uses pointers to calculate and display total revenue for items represented by paired prices and quantities.
#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    double price[size] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double quality[size] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9,4.8};
    double amount[size];

    // Calculate the amount array using pointers
    for (int i = 0; i < size; i++) {
        *(amount+i) = *(price+i) * *(quality+i);
    }

    // Display the amount array using pointers
    for (int i = 0; i < size; i++) {
        cout << "The amount in index " << i << " is: " << *(amount+i) << endl;
    }

    return 0;
}
