/* 
   File:   main
   Author: Nick Stang
   Created on September 12, 2016, 9:45 PM 
   Purpose:This program calculates the total sum of five prices of items
 * poi = price of item.  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main() 
{
    //Declaration of Variables
    double total, poi1, poi2, poi3, poi4, poi5;
   
    //Prices for all the items.
    poi1=15.95;
    poi2=24.95;
    poi3=6.95;
    poi4=12.95;
    poi5=3.95;
    
    //Calculation for the sum of all the items.
    total=poi1+poi2+poi3+poi4+poi5;
    
    //Display the results for the addition of the items.
    cout << "Grand Total is "<<total<<"$ for all the items.";

   
 
    return 0;
}