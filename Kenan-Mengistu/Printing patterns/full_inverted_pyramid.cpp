#include <iostream>
using namespace std;

int main() {
 int row = 6;
 for (int i=row; i >= 1; i--)
 {
   for (int j=row; j > i; j--)
   {
   cout << " ";
   }
   for (int k=1; k < i*2; k++)
   {
   cout << "*";
   }
   cout << endl;
 } 
return 0;
}