/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 20, 2015, 5:58 PM
   Purpose: Hmwk, Savitch_9thEd_Chap4_PracProg1
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float LITERS_TO_GALLONS=0.264179;//Liters to gallons (1 liter=0.264179 gallons)

//Function Prototypes
float miles_per_gallon(float liters_par, float miles_par);

//Execution Begins Here!
int main(int argc, char** argv)
{
    float liters;
    float miles;
    float mpg;
    
    cout<<"This program will read in the number of liters of gasoline consumed "<<endl;
    cout<<"by the user's car and the number of miles traveled by the car and "<<endl;
    cout<<"then output the number of miles per gallon the car delivered."<<endl;
    
    cout<<"Please enter the number of liters of gasoline consumed by your car: ";
    cin>>liters;
    cout<<"Please enter the number of miles traveled by the car: ";
    cin>>miles;
    
    mpg=miles_per_gallon(liters, miles);
    
    cout<<"The number of miles per gallon the car delivered: ";
    cout<<miles_per_gallon;
    
    return 0;
}

float miles_per_gallon(float liters_par, float miles_par)
{
    return (float liters_par*LITERS_TO_GALLONS/float miles_par);
}