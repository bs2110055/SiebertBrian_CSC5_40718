/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 20, 2015, 6:46 PM
   Purpose: Hmwk, Savitch_9thEd_Chap3_PracProg1
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
char p1;
char p2;

do
{
    cout<<"This program will score the paper-rock-scissors game. Each of the "<<endl;
    cout<<"two users types in either P, R, or S. The program then announces the "<<endl;
    cout<<"winner as well as the basis for determining the winner."<<endl<<endl;
    
    cout<<"Please choose 'P' for Paper, 'R' for Rock, or 'S' for Scissors."<<endl;
    cout<<"Player One, please enter your choice: "<<endl;
    cin>>p1;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"Please choose 'P' for Paper, 'R' for Rock, or 'S' for Scissors."<<endl;
    cout<<"Player Two, please enter your choice: "<<endl;
    cin>>p2;
    cout<<endl;

if(p1==p2)
    cout<<"Nobody wins"<<endl;
if((p1=='P'&&p2=='p')||(p1=='p'&&p2=='P'))
    cout<<"Nobody wins"<<endl;
if((p1=='S'&&p2=='s')||(p1=='S'&&p2=='s'))
    cout<<"Nobody wins"<<endl;
if((p1=='R'&&p2=='r')||(p1=='R'&&p2=='r'))
    cout<<"Nobody wins"<<endl;

if((p1=='P'||p1=='p')&&(p2=='R'||p2=='r'))
    cout<<"Paper covers Rock"<<endl<<"Player One wins"<<endl;
if((p1=='R'||p1=='r')&&(p2=='P'||p2=='p'))
    cout<<"Paper covers Rock"<<endl<<"Player Two wins"<<endl;

if((p1=='P'||p1=='p')&&(p2=='S'||p2=='s'))
    cout<<"Scissors cut Paper"<<endl<<"Player Two wins"<<endl;
if((p1=='S'||p1=='s')&&(p2=='P'||p2=='p'))
    cout<<"Scissors cut Paper"<<endl<<"Player One wins"<<endl;

if((p1=='R'||p1=='r')&&(p2=='S'||p2=='s'))
    cout<<"Rock breaks Scissors"<<endl<<"Player One wins"<<endl;
if((p1=='S'||p1=='s')&&(p2=='R'||p2=='r'))
    cout<<"Rock breaks Scissors"<<endl<<"Player One wins"<<endl;

cout<<endl;    
cout<<"Would you like to repeat this calculation?"<<endl;
cout<<"Press 'Y' for yes, or 'N' for no, and then press return: "<<endl;
cin>>repeat;
}

while (repeat=='Y'||repeat=='y');

return 0;
}