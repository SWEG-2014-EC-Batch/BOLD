#include<iostream>
using namespace std;

int main()
{
	int i, j, rows = 7, columns = 8;
    cout << "Hollow Rectangle Star Pattern\n"; 

    for(i = 0; i < rows; i++)
    {
    	for(j = 0; j < columns; j++)
		{
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) 
            {
                cout << "*";
            }
           	else 
            {
                cout << " ";
            } 
        }
        cout << "\n";
    }		
 	return 0;
}