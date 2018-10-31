/***********************************************************************
* Program:
*    Assignment 33, Pointers         
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
#include <iomanip>
#include <fstream>
using namespace std;

void displayBalance()
{
   float balanceSam;
   float balanceSue;
   float dinner;
   float movie;
   float icecream;
   
   cout << "What is Sam's balance? ";
    cin >> balanceSam;
   cout << "What is Sue's balance? ";
    cin >> balanceSue;
   
   cout << "Cost of the date:\n"
        << "\tDinner:    ";
    cin >> dinner;
   cout << "\tMovie:     ";
    cin >> movie;
   cout << "\tIce cream: ";
    cin >> icecream;
   
   float * pAccount;
   
   if (balanceSam > balanceSue)
   {
      pAccount = &balanceSam;
   }
   else if (balanceSue > balanceSam)
   {
      pAccount = &balanceSue;
   }
   
   *pAccount -= dinner;
   *pAccount -= movie;
   *pAccount -= icecream;
   
   cout << "Sam's balance: $" << balanceSam <<"\n"
        << "Sue's balance: $" << balanceSue << endl;
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   displayBalance();

   return 0;
}
