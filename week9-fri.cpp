/***********************************************************************
* Program:
*    Assignment 00, Test 3       
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

void display()
{
   cout << "I am learning\n";
}

/**********************************************************************

 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   int learning = 1;
   while (learning <= 10)
   {
      display();
      learning++ ;
   }
   
   return 0;
}
