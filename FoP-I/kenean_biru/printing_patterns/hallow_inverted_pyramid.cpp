#include <iostream>
using namespace std;

int main() {
   int rows;

   cout << "Enter number of rows: ";
   cin >> rows;

   // Loop to iterate through rows
   for (int i = rows; i >= 1; i--) {
      // Loop to create each row
      for (int j = 1; j <= i; j++) {
         if (i == rows || j == 1 || j == i) {
            cout << "* ";
         } else {
            cout << "  ";
         }
      }
      cout << endl;
   }

   return 0;
}