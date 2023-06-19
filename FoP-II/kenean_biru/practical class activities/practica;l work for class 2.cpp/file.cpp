//demonstration of the way to avoid re defination of a fun file.h
//connected to the file fire1 and fire2  
#include<iostream>
#include "fire.h"

#ifndef FIRE2// main concept if not defined
#define FIRE2//then define it otherwise use it as include 
using namespace std;


int main() {
    first();//call the fuction 
    fun();//also the fun in fire2 can be called
    return 0;
}
#endif//end the if