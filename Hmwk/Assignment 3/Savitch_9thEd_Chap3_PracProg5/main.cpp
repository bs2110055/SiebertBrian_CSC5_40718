/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 20, 2015, 7:57 PM
   Purpose: Hmwk, Savitch_9thEd_Chap3_PracProg2
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
    for (int x=3; x<100; x++)
        for (int y=2; y<x; y++)
        {
            if (x%y==0)
                break;
            else if (x==y+1)
                cout<<x<<endl;
        }
    return 0;
}