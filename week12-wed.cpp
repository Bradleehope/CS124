/***********************************************************************
* Program:
*    Assignment 00, Test 4         
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

int getNum()
{
   int num;
   int count = 1;
   cout << "Please enter a number: ";
    cin >> num;
   while (num != 0)
   {
    cout << "Please enter a number: ";
    cin >> num;
       if (num != 0, num >= 10)
       {
          count ++;
       }
   }
   return count;
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

   cout << getNum() << endl;

   return 0;
}
