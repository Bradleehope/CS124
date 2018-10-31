/***********************************************************************
* Program:
*    Assignment  ,         
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

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   //how to allocate memory
   //static allocation-knows before it is even ran, done on stack
   //"7 is on the stack
   int x;
   x = 7;
       //of an array
       //q is a pointer that stores the address of the array, is first part of array 
       int q[30];
   
   //dynamic allocation- on heap, more memory available, unorganized
   //"7 is on the heap"
   //used for large items
   int *y = new int;
   *y = 7;
       // of an array
         int *z = new int[30];
         
         for (int i = 0; i < 5; i += 1) //will print out what you put in 
         {
          cin >> z[i];
          cout << z[i] << endl;
         }
   return 0;
}
