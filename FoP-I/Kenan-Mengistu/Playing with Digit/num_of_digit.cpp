#include<iostream>

using namespace std;
int main()
{
   int num, numOfDigit=0;
   cout<<"Enter the Number: ";
   cin>>num;
   while(num>0)
   {
      numOfDigit++;
      num = num/10;
   }
   cout<<"\nTotal Digits = "<<numOfDigit;
   cout<<endl;
   return 0;
}