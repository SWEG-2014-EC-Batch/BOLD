#include <iostream>
using namespace std;

int fact(int num) {
   int f=1;
   for(int i=num; i>=1; i--) {
      f=f*i;
   }
   return f;
}

int main() {
   int num, sum=0, n;
   cout<<"Enter a number: ";
   cin>>num;
   n=num;
   while(num>0) {
      int rem=num%10;
      sum=sum+fact(rem);
      num=num/10;
   }
   if(sum==n) {
      cout<<n<<" is a strong number"<<endl;
   } else {
      cout<<n<<" is not a strong number"<<endl;
   }
   return 0;
} 