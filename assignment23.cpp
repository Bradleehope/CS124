/***********************************************************************
* Program:
*    Assignment 23, Math loop         
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
using namespace std;

/*
*This function will add multiples of a number together
*that are less than 100
*/
int multiples()
{
   int number;
   int multiple;
   int sum = 0;
      
   cout << "What multiples are we adding? ";
   cin >> number;

   for (int multiple = 0; multiple < 100; multiple += number)
   { 
      multiple = multiple + number;
   }
   
   cout << "The sum of multiples of " << number
        << " less than 100 are: " << sum << "\n";
        
   return sum;
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

   multiples();
        
   return 0;
}
