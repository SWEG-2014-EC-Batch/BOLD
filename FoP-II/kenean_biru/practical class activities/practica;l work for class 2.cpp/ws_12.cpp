//passing afunction with parameter using reference and pointer 
//worksheet no 12

#include <iostream>
using namespace std;
void calquotient( double &x ,double &y,  double *answer );


int main(){ 
   double x=8;
    double y=2;
    double result;
    calquotient (x,y,&result);
 cout <<result;
}
void calquotient( double &x ,double &y,  double *answer ){
    
    *answer = x/y;}
