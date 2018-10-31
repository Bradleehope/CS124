/***********************************************************************
* Program:
*    Assignment 11
*    Brother Cook, CS124
* Author: Bradlee Rothwell
*
* Summary: 
*    this program with show my monthly budget
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
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
   
   float income = 1000.00;
   float taxes = 100.00;
   float tithing = 100.00;
   float living = 650.00;
   float other = 90.00;
   float delta = 60.00;
   
   cout << setw(16) << left << "\tItem" << "Projected\n" 
        << "\t=============  ==========\n"
        << setw(16) << left << "\tIncome" << "$" << setw(9) << right << income << "\n"
        << setw(16) << left << "\tTaxes" << "$" << setw(9) << right << taxes << "\n"
        << setw(16) << left << "\tTithing" << "$" << setw(9) << right << tithing << "\n"
        << setw(16) << left << "\tLiving" << "$" << setw(9) << right << living << "\n"
        << setw(16) << left << "\tOther" << "$" << setw(9) << right << other << "\n"
        << "\t=============  ==========\n"
        << setw(16) << left << "\tDelta" << "$" << setw(9) << right << delta << "\n"; 
   return 0;
}
