/***********************************************************************
* Program:
*    Assignment, 12         
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    asking income
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
   
   
   float income;
   
   cout << "\tYour monthly income: "; 
   cin >> income;
   cout << "Your income is: $" << setw(9) << right << income << "\n"; 
   return 0;
}
