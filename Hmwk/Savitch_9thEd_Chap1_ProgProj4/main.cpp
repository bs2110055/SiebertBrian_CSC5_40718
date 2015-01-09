/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 8, 2015, 2:41 PM
   Purpose: Hmwk, Savitch_9thEd_Chap1_ProgProj4
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int GRAVITY=32;//(ft/sec)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int time;
    int distance;
    cout<<"This program will allow the user to enter a time\n";
    cout<<"in seconds and then output how far an object would\n";
    cout<<"drop if it is in freefall for that length of time.\n\n";
    cout<<"Press return after entering a number.\n\n";
    cout<<"Enter time in seconds:\n";
    cin>>time;
    distance=GRAVITY*time*time/2;          
    cout<<"The object dropped ";
    cout<<distance;
    cout<<" feet.";
    return 0;
}