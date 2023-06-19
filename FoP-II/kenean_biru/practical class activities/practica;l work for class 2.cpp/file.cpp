//demonstration of the way to avoid re defination of a fun file.h
//connected to the file file1 and file2  
#include<iostream>
#include "fire.h"

#ifndef FILE2// main concept if not defined
#define FILE2//then define it otherwise use it as include 
using namespace std;


int main() {
    first();//call the fuction 
    fun();//also the fun in fire2 can be called
    return 0;
}
#endif//end the if
