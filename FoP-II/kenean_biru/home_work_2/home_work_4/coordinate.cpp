#include<iostream>
using namespace std;
struct coordinate{
double x;
double y;
};
coordinate first;
coordinate getvals();
void dispaly();
coordinate getvals(){

    cout<<"enter the x coordinate";
    cin>>first.x;
    cout <<"enter the y cooridnate";
    cin>>first.y;
    return first;
}
void display( coordinate second){
cout <<"the coordinates are ("<<second.x<<","<<second.y<<")";
}


int main(){
    first=getvals();
    display(first);

}