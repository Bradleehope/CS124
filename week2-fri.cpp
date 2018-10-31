/***********************************************************************
* Program:
*    Assignment 00        
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   
  float price;
  float miles;
  float totalMiles;
  float total = price;
  
  cout << "What is the price of gasoline per gallon? $";
  cin >> price;
  cout << "How many miles per gallon does your car get? ";
  cin >> miles;
  cout << "How many total miles do you have to travel? ";
  cin >> totalMiles;  
  cout << "Please wait till I figure this out...";
  cout << "\n";
  cout << "\tThe cost of gas for your trip is: $\n" << total;
  return 0;
}
