/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 8, 2015, 5:36 PM
   Purpose: Hmwk, Savitch_9thEd_Chap1_PracProg5
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int a, b, c;
    
    cout << "This program will calculate the total length of.\n";
    cout << "fence you would need to enclose a rectangle area.\n\n";
  
    cout << "Press return after entering a number.\n";
    cout << "Enter the width in feet:\n";
    cin>>a;
    
    cout << "Enter the height in feet:\n";    
    cin>>b;
    
    c=a+a+b+b;
    
    cout << "The total length of fence needed is:\n";
    cout << c;
    cout <<" feet";    

    return 0;
}

