/***********************************************************************
* Program:
*    Assignment 00, Test FOR loop     
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
/*
* print out odd numbers
*/
void display()
{
   int number;
   int sum = 0;
   
   for(number = 1; number <= 11; number += 2)
   {
      if(number != 7)
      {
         cout << number << endl;
      }
      
   }  
}

/**********************************************************************

 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   display();
   
   return 0;
}
