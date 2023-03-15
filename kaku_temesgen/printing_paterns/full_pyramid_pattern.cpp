//this is a c++ program that print stars in full pyramid pattern.
#include <iostream>
using namespace std;
int pyramid();
int main(){
    // i = row, j = spaces, k = astrics, both j and k represent column
    int row;
    cout<<"Enter the number of rows :";
    cin>>row;
    cout<<"Expected Pyramid\n\n";
    for(int i = 1; i <=row; ++i){
        for(int j = 1; j <= row - i; ++j){
        cout << "  ";
        }
        for(int k = 0; k != 2*i-1; k++){
            cout<<"* ";
        }
        cout <<"\n";
    }
    return 0;
}

