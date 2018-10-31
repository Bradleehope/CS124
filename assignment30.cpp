/***********************************************************************
* Program:
*    Assignment 30, Array Syntax         
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
//#include <fstream>
using namespace std;

/*
* Prompt user for grades
*/
void getGrades(float grades[])
{
   int x = 1;
   while (x <= 10)
   {
      cout << "Grade " << x << ": ";
      cin  >> grades[x];
      x++ ;
   }
}

/*
* Calculate average of the grades
*/
float averageGrades(float grades[])
{
   int x = 0;
   int average;
   while (x <= 10)
   {
      average += grades[x++ ];
   }
   average = average / 10;
   return average;
} 

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.precision(0);

   float grades[10];
   
   getGrades(grades);
  

   cout << "Average Grade: " << averageGrades(grades) << "%\n";
   
   return 0;
}
