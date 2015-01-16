/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 15, 2015, 6:03 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_ProgProj2
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
    float previous_salary;//The previous annual salary of the employee
    float months;//The amount of retroactive months
    float retroactive_pay;//The retroactive pay for 6 months
    float new_salary;//The new annual salary of the employee
    float new_monthly;//The new monthly salary of the employee
    
    do
    {
    cout<<"This program will calculate an employee's retroactive pay for a "<<endl;
    cout<<"given amount of months, their new annual salary, and their new "<<endl;
    cout<<"monthly salary given their previous annual salary and a 7.6% increase."<<endl;
    cout<<endl;
    cout<<"Please enter the employee's previous annual salary in dollars: ";
    cin>>previous_salary;
    cout<<"Please enter the amount of retroactive months: ";
    cin>>months;
    
    retroactive_pay=(previous_salary*0.076)*months;
    new_salary=(previous_salary*0.076)+previous_salary;
    new_monthly=new_salary/12;
    
    cout<<"The amount of retroactive pay due for ";
    cout<<months;        
    cout<<" months is: ";
    cout<<retroactive_pay;
    cout<<" dollars";
    cout<<endl;
    cout<<"The employee's new annual salary is: ";
    cout<<new_salary;
    cout<<" dollars";
    cout<<endl;
    cout<<"The employee's new monthly salary is: ";
    cout<<new_monthly;
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