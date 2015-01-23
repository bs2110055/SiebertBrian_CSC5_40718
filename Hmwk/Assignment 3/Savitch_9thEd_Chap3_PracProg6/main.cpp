/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 22, 2015, 6:00 PM
   Purpose: Hmwk, Savitch_9thEd_Chap3_PracProg6
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    int f;//Buoyant force
    int v;//volume of submerged object
    int y;//specific weight of the fluid
    
    int w;//weight of the object (in pounds)
    int r;//radius (in feet)
    
    cout<<"This program will take the input of the weight (in pounds) and the "<<endl;
    cout<<"radius (in feet) of a sphere and output whether the sphere will sink "<<endl;
    cout<<"or float in water."<<endl<<endl;
    
    cout<<"Please enter the weight (in pounds) of a sphere: ";
    cin>>w;
    
    cout<<"Please enter the radius (in feet) of a sphere: ";
    cin>>r;
    cout<<endl;
    
    y=62.4;//specific weight of water (lb/ft^3)
    v=(4/3)*3.14*r*r*r;//volume of sphere
    f=v*y;
    
    if (f<w)
        cout<<"The sphere sinks."<<endl;
    else
        cout<<"The sphere floats."<<endl;
    
    return 0;
}

