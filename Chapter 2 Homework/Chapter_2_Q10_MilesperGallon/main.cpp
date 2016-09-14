/* 
   File:   main
   Author: Nick Stang
   Created on September 12, 2016, 9:00 PM 
   Purpose:This program calculates a car with 20 gallons of gas that can get
 * 23.5 MPG in town and 28.9 MPG highway, how many miles can it travel in both
 * town and highway.  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() 
{
    //Declaration of Variables
    //The amount of gallons of gas multiplied by MPG of town and freeway.
    double Gallons = 20, twn, hwy;
    twn= Gallons * 23.5;
    hwy= Gallons * 28.9;
    
    // The results of the calculation to be displayed.
    cout << "Highway: "<<hwy<<" miles.\n";
    cout << "Town: "<<twn<<" miles.\n";
   
 
    return 0;
}