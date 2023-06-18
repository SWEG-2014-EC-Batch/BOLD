// a program to test scaling values up and down
#include <iostream>
#include <cassert>

using namespace std;

void scale(double val, double& num1, double& num2){
assert(val!=0); //precondition using assert case
num1 *= val; //to test scaling values up
num2 *= val;
num1 /=val;// to test scaling values down
num2 /=val;


}
int main(){
  double num1, num2, scale_factor;
  cout<< " Enter the first number"<<endl;
  cin>>num1;
  cout<< "enter the second number"<<endl;
  cin>>num2;
  cout<< "enter the scaling factor";
  cin>> scale_factor;

  scale(scale_factor, num1, num2);// a function which takes the first parameter to scale the other two

cout << "\n values before scaling:"<< endl; //to print values before scaling
cout <<"num1=" <<num1<<endl;
cout << "num2="<<num2<<endl;

  cout<< "\nValues after scaling:" <<endl;//to print out values after scaling
  cout << "num1 multiplied by scale factor = " << (num1 * scale_factor) <<endl;
  cout<< "num1 divided by scale factor = " << (num1 / scale_factor)<< endl;
  cout << "num2 multiplied by scale factor =" << (num2 * scale_factor)<<endl;
  cout<< "num2 divided by scale factor=" << (num2 / scale_factor )<<endl;




    return 0;
}



