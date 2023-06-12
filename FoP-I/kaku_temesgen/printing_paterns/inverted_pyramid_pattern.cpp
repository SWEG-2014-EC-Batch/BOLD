//this is a c++ program that prints stars in inverted pyamid pattern.
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows :";
    cin>>row;

    int i, space, j;
    for(i=1; i<=row; i++)
    {
        for(space=1; space<i; space++)
            cout<<" ";
        for(j=i; j<=row; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
