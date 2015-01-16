/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 15, 2015, 7:23 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_ProgProj5
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
    float capacity;//The maximum room capacity.
    float people;//The number of people attending the meeting.
    float additional;//The amount of additional people that may attend a legal meeting.
    float exclude;//The amount of people that need to be excluded from a meeting to make it legal.
    
    do
    {
    cout<<"This program will determine whether a meeting room is in violation "<<endl;
    cout<<"of fire law regulations regarding the maximum room capacity."<<endl;
    cout<<endl;
    cout<<"Please enter the maximum room capacity: ";
    cin>>capacity;
    cout<<"Please enter the number of people attending the meeting: ";
    cin>>people;    
    cout<<endl;
    
    additional=capacity-people;
    exclude=people-capacity;
    
    if (people<=capacity)
    {
        cout<<"It is legal to hold the meeting.";
        cout<<endl;
        cout<<additional;
        cout<<" additional people may attend.";       
    }
    else
    {    
        cout<<"The meeting cannot be held as planned due to fire regulations.";
        cout<<endl;
        cout<<exclude;
        cout<<" people need to be excluded to meet fire regulations.";       
    }
    
    cout<<endl;
    cout<<endl;
    cout << "Do you want another calculation?\n"
<< "Press y for yes, n for no,\n"
<< "and then press return: ";
cin >> ans;
} while (ans == 'y' || ans == 'Y');

    return 0;
}