#include <iostream>
using namespace std;

int main() {
   int rows, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   // Loop to iterate through each row
   for (int i = 1; i <= rows; i++) {
      // Loop to print spaces
      for (space = 1; space <= rows - i; space++) {
         cout << "  ";
      }
      // Loop to print stars
      for (int j = 1; j <= 2 * i - 1; j++) {
         if(i == 1 || i == rows || j == 1 || j == 2 * i - 1) {
            cout << "* ";
         } else {
            cout << "  ";
         }
      }
      cout << endl;
   }

   return 0;
}