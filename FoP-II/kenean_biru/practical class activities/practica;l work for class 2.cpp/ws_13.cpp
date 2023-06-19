//function overloading 
#include <iostream>
#include <math.h>
using namespace std;

float maxf1(double x,double y){//name the first function with maxf1 with two parameters
 int max1=max(x,y);
return max1;
}
float maxf1(double x,double y,double z){// name the second function with  maxf1 with 3 parameters
  float max1;
  if(x>y && x>z){
    max1=x;
  }
  else if (y>x &&y>z){
    max1=y;
  }
    else{max1=z;}
return max1;
}

int main(){
    cout<<"the maximum of the first two numbers is "<<maxf1(4,5)<<endl;//call the function with 2 parameteres
   cout<<"the maximum of the second three numbers is "<<maxf1(5,6,7);//call the function with 3 parameteres
}


