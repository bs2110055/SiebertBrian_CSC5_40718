/* 
 File:   main.cpp
   Author: Brian Siebert
   Created on January 13, 2015, 9:08 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_ProgProj1
 */
//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    float weight;//The weight in which you desire to stop your diet
    float lethal_dose;//The amount of sugar that is a lethal dose
    float sugar_can;//The amount of sugar per can of diet soda pop
    float soda_drink;//The amount of cans of diet soda pop it is possible to drink without dying.
    
    cout<<"This program will calculate how much diet soda pop"<<endl;
    cout<<"it is possible to drink without dying as a result."<<endl;
    cout<<endl;
    cout<<"Please enter the weight in which you desire to stop your diet, in pounds: ";
    cin>>weight;
    lethal_dose=(weight*454)/7;
    cout<<"The amount of sugar that is a lethal dose at that weight is: ";
    cout<<lethal_dose;
    cout<<" grams";
    cout<<endl;
    sugar_can=350*0.001;
    soda_drink=lethal_dose/sugar_can;
    cout<<"The amount of cans of soda pop that can be consumed before dying is: ";
    cout<<soda_drink;
    cout<<" cans";
    
    return 0;
}