#include <iostream>
using namespace std;

int main() {
   int rows, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   
   for (int i = rows; i >= 1; i--) {
      
      for (space = 1; space <= rows - i; space++) {
         cout << "  ";
      }
      
      for (int j = 1; j <= 2 * i - 1; j++) {
         cout << "* ";
      }
      cout << endl;
   }

   return 0;
}