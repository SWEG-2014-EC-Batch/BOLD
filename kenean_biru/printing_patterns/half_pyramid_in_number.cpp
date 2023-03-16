#include <iostream>
using namespace std;

int main() {
   int rows;

   cout << "Enter number of rows: ";
   cin >> rows;

   // Loop to iterate through each row
   for (int i = 1; i <= rows; i++) {
      // Loop to print each number in row
      for (int j = 1; j <= i; j++) {
         cout << j << " ";
      }
      cout << endl;
   }

   return 0;
}