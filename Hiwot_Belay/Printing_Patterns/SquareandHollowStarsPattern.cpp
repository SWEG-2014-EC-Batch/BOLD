#include <iostream>
using namespace std;

int main() {
   int rows, cols;
   cout << "Enter the number of rows and columns: ";
   cin >> rows >> cols;

   // print square pattern
   cout << "Square pattern:" << endl;
   for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= cols; j++) {
         cout << "* ";
      }
      cout << endl;
   }
   cout << endl;

   // print hollow square pattern
   cout << "Hollow square pattern:" << endl;
   for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= cols; j++) {
         if (i == 1 || i == rows || j == 1 || j == cols) {
            cout << "* ";
         }
         else {
            cout << "  ";
         }
      }
      cout << endl;
   }

   return 0;
}
