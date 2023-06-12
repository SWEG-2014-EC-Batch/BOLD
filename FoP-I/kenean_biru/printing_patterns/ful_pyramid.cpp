#include <iostream>
using namespace std;

int main() {
   int rows, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   // Loop to iterate through rows
   for (int i = 1; i <= rows; i++) {
      // Loop to create spaces
      for (space = 1; space <= rows - i; space++) {
         cout << "  ";
      }
      // Loop to create each row
      for (int j = 1; j <= 2 * i - 1; j++) {
         cout << "* ";
      }
      cout << endl;
   }

   return 0;
}