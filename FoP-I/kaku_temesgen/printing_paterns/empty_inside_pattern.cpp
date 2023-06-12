//this is c++ program that generate stars in rectangle pattern with empty inside.
#include<iostream>
using namespace std;
int main()
{
  int rows, columns;
  cout << "\n Enter number of Rows = ";
  cin >> rows;

  cout << "\n Enter number of Columns = ";
  cin >> columns;

  for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
    {
      if(i ==1 ||i==rows || j ==1 || j == columns)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
        }
        cout << "\n";
    }
   return 0;
}
