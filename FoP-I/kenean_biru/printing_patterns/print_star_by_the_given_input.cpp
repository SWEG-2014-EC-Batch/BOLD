#include <iostream>
using namespace std;

int main() {
   int row, col;

   cout << "Enter the row number: ";
   cin >> row;

   cout << "Enter the column number: ";
   cin >> col;

   // Loop to print * in row and column
   for (int i = 1; i <= row; i++) {
      for (int j = 1; j <= col; j++) {
         if (i == row && j == col) {
            cout << "*";
         } else {
            cout << " ";
         }
      }
      cout << endl;
   }

   return 0;
}