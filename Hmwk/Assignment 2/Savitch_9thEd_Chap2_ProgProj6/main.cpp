/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 15, 2015, 7:56 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_ProgProj6
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    char ans;
    float hours;//The amount of hours worked in a week.
    float dependents;//The amount of dependents.
    float rate;//The rate of pay per hour.
    float gross_pay;//The gross pay for the week.
    float social;//Social Security withholdings.
    float federal;//Federal income tax withholdings.
    float state;//State income tax withholdings.
    float dues;//Union dues withholdings.
    float health;//Dependent's health insurance.
    float net;//Net take-home pay.
    
    do
    {
    cout<<"This program will determine the worker's gross pay, withholding "<<endl;
    cout<<"amounts, and the net take-home pay for the week given the number of "<<endl;
    cout<<"hours worked in a week and the number of dependents."<<endl;
    cout<<endl;
    cout<<"Please enter the number of hours worked in a week: ";
    cin>>hours;
    cout<<"Please enter the number of dependents: ";
    cin>>dependents;    
    cout<<endl;
    
    rate=16.78;
    
    if (hours>40)
    {
        gross_pay=rate*40+1.5*rate*(hours-40);       
    }
    else
    {    
        gross_pay=rate*hours;       
    }
    
    if (dependents>3)
    {
        health=35;
    }
    else
    {
        health=0;
    }
   
    social=gross_pay*0.06;
    federal=gross_pay*0.14;
    state=gross_pay*0.05;
    dues=10;     
    net=gross_pay-social-federal-state-dues-health;
            
    cout<<"The worker's gross pay is: ";
    cout<<gross_pay;
    cout<<" dollars.";
    cout<<endl;
    cout<<"The amount withheld for Social Security is: ";
    cout<<social;
    cout<<" dollars.";
    cout<<endl;
    cout<<"The amount withheld for federal income tax is: ";
    cout<<federal;
    cout<<" dollars.";
    cout<<endl;
    cout<<"The amount withheld for state income tax is: ";
    cout<<state;
    cout<<" dollars.";
    cout<<endl;  
    cout<<"The amount withheld for union dues is: ";
    cout<<dues;
    cout<<" dollars.";
    cout<<endl;  
    cout<<"The amount withheld for dependent health insurance is: ";
    cout<<health;
    cout<<" dollars.";
    cout<<endl;
    cout<<"The net take-home pay is: ";
    cout<<net;
    cout<<" dollars.";
    cout<<endl; 
    
    
    cout<<endl;
    cout<<endl;
    cout << "Do you want another calculation?\n"
<< "Press y for yes, n for no,\n"
<< "and then press return: ";
cin >> ans;
} while (ans == 'y' || ans == 'Y');

    return 0;
}