/* 
 File:   main.cpp
   Author: Brian Siebert
   Created on January 13, 2015, 8:42 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_PracProg3
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float mph;//Miles per hour on a treadmill
    float hpm;//Pace as hours per mile
    float fmpm;//Miles per minute as a float
    int impm;//Miles per minute as an integer
    float fmspm;//Fraction left for seconds per mile
    
    //Prompt for input
    cout << "How many miles are you running"<<endl;
    cout << "in an hour?"<<endl;
    cout << "Format answer as a float."<<endl;
    cin >> mph;
    //Calculate the relevant pace
    hpm=1/mph;
    fmpm=hpm*60;        
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*60;
    //Output the result
    cout<<mph<<" (mph) = ";
    cout<<impm<<" (mins) ";
    cout<<fmspm<<" (secs) per mile"<<endl;           

    return 0;
}

