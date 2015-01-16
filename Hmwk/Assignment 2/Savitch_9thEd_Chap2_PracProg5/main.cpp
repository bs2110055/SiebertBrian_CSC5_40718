//File Name:   main.cpp
//Author: Brian Siebert
//Email Address: bsiebert@student.rcc.edu
//Assignment Number: 2
//Description: Program to compute the volume of a sphere
//Last Changed: January 15, 2015

#include <iostream>
using namespace std;
int main( )
{
    const float PI=3.1415;//Pi
    float radius, vm;
    
    cout<<"Enter radius of a sphere: ";
    cin>>radius;
    
    vm=(4.0/3.0)*PI*radius*radius*radius;
    
    cout<<"The volume is ";
    cout<<vm;
    
    return 0;
}