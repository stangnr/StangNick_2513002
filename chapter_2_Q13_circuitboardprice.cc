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
    cout << "Cost: $" << cost << endl;
    cout << "Profit: $" << pft << endl;
    cout << "Price: $" << prc << endl;
    return 0;
}