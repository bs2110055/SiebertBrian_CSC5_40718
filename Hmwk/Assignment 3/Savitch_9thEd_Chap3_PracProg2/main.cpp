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
char repeat;
float total;
float interest;
float minimum;
float balance;
      
do
{
cout<<"This program will compute the interest due, total amount due, and the"<<endl;
cout<<"minimum payment for a revolving credit account."<<endl<<endl;

cout<<"Please enter your account balance in dollars: ";
cin>>balance;

if (balance<=1000)
{
interest=.015*balance;
total=interest+balance;
}

if(balance>1000)
{
interest=.01*balance;
total=interest+balance;
}
       
if (total<=10)
minimum=total;
else if (10<total*.01)
minimum=total*.01;
else
minimum=10;
 
cout<<"The interest due is: "<<interest<<" dollars"<<endl;
cout<<"The total amount due is: "<<total<<" dollars"<<endl;
cout<<"The minimum payment is: "<<minimum<<" dollars"<<endl<<endl;

cout<<"Would you like to repeat this calculation?"<<endl;
cout<<"Press 'Y' for yes, or 'N' for no, and then press return: "<<endl;
cin>>repeat;
}

while (repeat=='Y'||repeat=='y');
return 0;
}