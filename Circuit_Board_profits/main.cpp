/* 
   File:   main
   Author: Nick Stang
   Created on September 12, 2016, 9:41 AM
   Purpose:Homework Chapters 1 and 2  
 */

//System Libraries
//Calculating the price of a circuit board that cost $14.95 and sold at a 35%
// profit.
#include <iostream>
using namespace std;

int main()
{
    //Variables hold the cost, profit, and price to be sold.
    double cost = 14.95 , pft, prc;
    
    //calculating the amount to add to the cost price.
    pft = cost * 0.35;
    
    //Adding the amount for profit to the initial cost of the circuit board.
    prc = cost + pft;
    
    //Displaying the results for the final price
    cout << "This program determines how much a circuit board should be sold";
    cout << " for to make a 35% profit.\n";
    cout << "Cost to make circuit boards: $"          << cost << endl;
    cout << "Price to sell the circuit boards for: $" << prc << endl;
    cout << "Profit per-circuit board: $"             << pft << endl;
    return 0;
}
    