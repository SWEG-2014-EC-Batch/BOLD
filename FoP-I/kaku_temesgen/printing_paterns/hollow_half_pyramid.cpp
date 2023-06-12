//this is a c++ program that generate stars in hollow half pyramid pattern.
#include <iostream>
using namespace std;

int main() {
  int number;
  cout<<"enter a number";
  cin >> number;
  for (int i=1; i<=number; i++)
   {
     for (int j=1; j<=number; j++)
     {
       if (j==1 || i==j || i==number )
       cout << " * ";
       else
       cout << "   ";
     }
     cout << endl;
   }
  return 0;
}
