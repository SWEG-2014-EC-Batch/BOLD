#include<iostream>
using namespace std;
struct complex{
    int real;
    int imaginary;
};
double adder(double x,double y){
    return x+y;
}
double substracter(double x,double y){
    return x-y;
}
double multiplier(double x,double y){
    return x*y;
}
double devider(double x,double y){
    return x/y;
}


int main(){
    complex x,y;
    cout <<"enter real";
    cin>>x.real;
    cout <<"enter imaginary";
    cin>>x.imaginary;
cout <<"enter real";
    cin>>y.real;
    cout <<"enter imaginary";
    cin>>y.imaginary;
    cout<<adder(x.real,y.real)<<"+"<<adder(x.imaginary,y.imaginary)<<"i"<<endl;
    cout<<substracter(x.real,y.real)<<"+"<<substracter(x.imaginary,y.imaginary)<<"i"<<endl;
cout<<multiplier(x.real,y.real)<<"+"<<multiplier(x.imaginary,y.imaginary)<<"i"<<endl;
cout<<devider(x.real,y.real)<<"+"<<devider(x.imaginary,y.imaginary)<<"i"<<endl;
return 0;
}