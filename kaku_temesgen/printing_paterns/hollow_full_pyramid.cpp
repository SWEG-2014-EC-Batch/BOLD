//this is c++ program that generate hollow full pyramid.
#include <iostream>
using namespace std;
int main() {
   int n, i, j;
   cout << "Enter number of lines: ";
   cin >> n;
   for(i = 1; i<=n; i++) {
      for(j = 1; j<=(n-i); j++) {
         cout << " ";
      }
      if(i == 1 || i == n) {
         for(j = 1; j<=i; j++) {
            cout << "* ";
         }
      }else{
         cout << "*";
         for(j = 1; j<=2*i-3; j++) {
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
}
