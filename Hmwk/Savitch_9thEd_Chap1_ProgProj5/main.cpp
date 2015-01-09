/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 8, 2015, 6:17 PM
   Purpose: Hmwk, Savitch_9thEd_Chap1_ProgProj5
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    char x;
    
    
    cout<<"This program will input a character from\n";
    cout<<"the keyboard and then output a large block\n";
    cout<<"letter 'C' composed of that character.\n\n";
 
    cout<<"Press return after entering a character.\n";
    cout<<"Enter the character\n";
    cin>>x;
    
    cout<<"   "<<x<<x<<x<<endl;
    cout<<"  "<<x<<"   "<<x<<endl;
    cout<<" "<<x<<endl;
    cout<<" "<<x<<endl;
    cout<<" "<<x<<endl;
    cout<<" "<<x<<endl;
    cout<<" "<<x<<endl;
    cout<<"  "<<x<<"   "<<x<<endl;
    cout<<"   "<<x<<x<<x<<endl;
    return 0;
}


