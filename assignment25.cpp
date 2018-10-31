/***********************************************************************
* Program:
*    Assignment 25, Display Table         
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
* This function will display the table and run offset
*/
int displayTable(int offset, int numDays)
{
   int day = 1;
   int blanks;
   
   if (offset == 6)
   {
      blanks = 0;
   }
   else
   {
      blanks = offset + 1;
   }
   
   cout << setw(4) << "Su"
        << setw(4) << "Mo"
        << setw(4) << "Tu"
        << setw(4) << "We"
        << setw(4) << "Th"
        << setw(4) << "Fr"
        << setw(4) << "Sa"
        << "\n"
        << setw(4 * blanks) << "";
    
   while (day <= numDays)
   {
      cout << setw(4) << day;
      if ((day + blanks) % 7 == 0)
      {
         cout << "\n";
      }
      day += 1;
   }
   if (offset != 4)
   {
      cout << "\n";
   }
   return 0;
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

   int numDays;
   int offset;
   cout << "Number of days: ";
   cin >> numDays;
   cout << "Offset: ";
   cin >> offset;
   
   displayTable(offset, numDays);
    
   return 0;
}
