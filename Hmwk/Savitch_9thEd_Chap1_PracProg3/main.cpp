/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 8, 2015, 4:01 PM
   Purpose: Hmwk, Savitch_9thEd_Chap1_PracProg3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Hello\n\n";
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n\n";
    
    cout << "Good-bye\n";
    return 0;
}

