/* 
 File:   main.cpp
   Author: Brian Siebert
   Created on January 13, 2015, 9:08 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_PracProg4
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    char* instructor;
    char* name;
    char* food;
    char* number;
    char* adjective;
    char* color;
    char* animal;
    
    cout<<"This program will play a game of Mad Lib."<<endl;
    cout<<"Enter the first or last name of your instructor:";
    cin>>instructor;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter a food:";
    cin>>food;
    cout<<"Enter a number between 100 and 120:";
    cin>>number;
    cout<<"Enter an adjective:";
    cin>>adjective;
    cout<<"Enter a color:";
    cin>>color;
    cout<<"Enter an animal:";
    cin>>animal;
    
    cout<<endl;
    cout<<"Dear Instructor ";
    cout<<instructor;
    cout<<endl;
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my ";
    cout<<"homework at this time. First, I ate a rotten ";
    cout<<food;
    cout<<", which made me turn ";
    cout<<color;
    cout<<" and extremely ill. I came down with a fever of ";
    cout<<number;
    cout<<". Next, my ";
    cout<<adjective;
    cout<<" pet ";
    cout<<animal;
    cout<<" must have smelled the remains of the ";
    cout<<food;
    cout<<" on my homework, because he ate it. ";
    cout<<"I am currently rewriting my homework";
    cout<<"and hope you will accept it late.";
    cout<<endl;
    cout<<endl;    
    cout<<"Sincerly,";
    cout<<endl;
    cout<<name;
    return 0;
}

