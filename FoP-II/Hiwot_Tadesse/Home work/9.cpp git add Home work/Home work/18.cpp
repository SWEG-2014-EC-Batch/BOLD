//A program that calculates discount applicable on the price of an item
#include <iostream>
using namespace std;

void applyDiscount(double& price, double discount, bool isPercentage);

int main() {
    double price = 100.0, discount = 10.0;
    bool isPercentage = true;

    cout << "Original Price: " << price << endl;
    applyDiscount(price, discount, isPercentage);
    cout << "Discounted Price: " << price << endl;

    return 0;
}
void applyDiscount(double& price, double discount, bool isPercentage) {
    double discountAmount;
  
    if (discount < 0) { // Check for negative discount
        cout << "Discount cannot be negative." << endl;
        return;
    }

    if (isPercentage) {
        discountAmount = price * discount / 100;
    } else {
        discountAmount = discount;
    }
  
    if ((price - discountAmount) <= 0) { //Check if discounted price causes value to go below zero
        cout << "Discounted price cannot be zero or less." << endl;
        return;
    }

    price -= discountAmount; // apply discount
}
