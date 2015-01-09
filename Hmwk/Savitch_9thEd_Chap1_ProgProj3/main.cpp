/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 8, 2015, 2:17 PM
   Purpose: Hmwk, Savitch_9thEd_Chap1_ProgProj3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float QUARTER=25;//(cents)
const float DIME=10;//(cents)
const float NICKEL=5;//(cents)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int number_of_quarters, number_of_dimes, number_of_nickels;
    int worth_of_quarters, worth_of_dimes, worth_of_nickels;
    int worth_of_coins;
    cout<<"This program will allow the user to enter a\n";
    cout<<"number of quarters, dimes, and nickels and then\n";
    cout<<"output the monetary value of the coins in cents.\n\n";
    cout<<"Press return after entering a number.\n\n";
    cout<<"Enter the number of quarters:\n";
    cin>>number_of_quarters;
    worth_of_quarters = number_of_quarters*QUARTER;
    cout<<"Enter the number of dimes:\n";
    cin>>number_of_dimes;
    worth_of_dimes = number_of_dimes*DIME;
    cout<<"Enter the number of nickels:\n";
    cin>>number_of_nickels;
    worth_of_nickels=number_of_nickels*NICKEL;
    worth_of_coins=worth_of_quarters+worth_of_dimes+worth_of_nickels;       
    cout<<"The monetary value of the coins are: ";
    cout<<worth_of_coins;
    cout<<" cents";
    return 0;
}