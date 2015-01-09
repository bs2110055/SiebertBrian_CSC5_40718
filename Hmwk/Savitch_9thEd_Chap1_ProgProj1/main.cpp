/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 8, 2015, 1:02 PM
   Purpose: Hmwk, Savitch_9thEd_Chap1_ProgProj1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int a, b, sum, product;
    
    cout<<"This program will read two integers and\n";
    cout<<"then output both their sum and their product.\n\n";
    cout<<"Press return after entering a number.\n\n";
    cout<<"Enter the first integer:\n";
    cin>>a;
    cout<<"Enter the second integer:\n";
    cin>>b;
    sum=a+b;
    product=a*b;
    cout<<"The sum of ";
    cout<<a;
    cout<<" and ";
    cout<<b;
    cout<<" is: ";
    cout<<sum;
    cout<<"\n";
    cout<<"The product of ";
    cout<<a;
    cout<<" and ";
    cout<<b;
    cout<<" is: ";
    cout<<product;
    return 0;
}

