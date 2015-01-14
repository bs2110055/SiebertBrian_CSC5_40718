/* 
   File:   main.cpp
   Author: Brian Siebert
   Created on January 8, 2015, 7:41 PM
   Purpose: Hmwk, Savitch_9thEd_Chap2_PracProg1
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
float ounce, ton, boxes;
do
{
cout << "This program will read the weight of a package of\n";
cout << "breakfast cereal in ounces and output the weight\n";
cout << "in metric tons as well as the number of boxes\n";
cout << "needed to yield 1 metric ton of cereal.\n\n";

cout << "Press return after entering a number.\n";
cout << "Enter the weight of a package of breakfast cereal in ounces:\n";

cin >> ounce;

ton = ounce/35273.92;
boxes = 35273.92/ounce;

cout << "Weight in metic tons:\n";
cout << ton;
cout << "\n";
cout << "Number of boxes needed to yield 1 metric ton of cereal:\n";
cout << boxes;
cout << "\n\n";
    
    
cout << "Do you want another calculation?\n"
<< "Press y for yes, n for no,\n"
<< "and then press return: ";
cin >> ans;
} while (ans == 'y' || ans == 'Y');
return 0;
}