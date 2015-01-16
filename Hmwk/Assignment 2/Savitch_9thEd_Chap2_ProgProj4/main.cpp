/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 15, 2015, 7:08 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_ProgProj4
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
    float dollars;//The amount the consumer needs to receive in dollars.
    float interest;//The interest rate of the loan.
    float interest_decimal;//The interest rate of the loan converted to decimal.
    float months;//The duration of the loan in months.
    float annual;//The duration of the loan in months converted to years.
    float value;//The face value required in order for the consumer to receive the amount needed.
    float payment;//The monthly payment of the loan.
    
    do
    {
    cout<<"This program will calculate the face value required in order for the "<<endl;
    cout<<"consumer to receive the amount needed, and the monthly payment given "<<endl;
    cout<<"the amount the consumer needs to receive, the interest rate, and the "<<endl;
    cout<<"duration of the loan in months."<<endl;
    cout<<endl;
    cout<<"Please enter the amount the consumer needs to receive in dollars: ";
    cin>>dollars;
    cout<<"Please enter the interest rate of the loan: ";
    cin>>interest;
    cout<<"Please enter the duration of the loan in months: ";
    cin>>months;
    cout<<endl;
    
    interest_decimal=interest/100;
    annual=months/12;
    
    value=dollars/(1-interest_decimal*annual);
    payment=value/months;     
    
    cout<<"The face value required in order for the   ";
    cout<<endl;
    cout<<"consumer to receive the amount needed is: ";
    cout<<value;
    cout<<" dollars";
    cout<<endl;
    cout<<"The monthly payment is: ";
    cout<<payment;
    cout<<" dollars";
    cout<<endl;
    cout<<endl;        
    
    cout << "Do you want another calculation?\n"
<< "Press y for yes, n for no,\n"
<< "and then press return: ";
cin >> ans;
} while (ans == 'y' || ans == 'Y');
return 0;
    return 0;
}