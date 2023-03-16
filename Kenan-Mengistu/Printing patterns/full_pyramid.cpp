#include <iostream>
using namespace std;

int main()
{
   int rows = 6, i, j, space;

   for(i = 1; i <= rows; i++)
   {
      for(space = i; space < rows; space++)
      {
         cout << " ";
      }
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "*";
      }

      cout << "\n";
   }

   return 0;
}