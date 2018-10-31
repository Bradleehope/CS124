/***********************************************************************
* Program:
*    Assignment 00,         
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    create function that will ask for a number and then will print out that number as
*    many times as the value of the number
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/*void displayNum()
{
   int number;
   
   cout << "Number: ";
    cin >> number;
   cout << endl;
   
   for (number > 0, number != number)
   {
      cout << number;
   }
}*/

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << setw(4) << "Numbers";
   


   return 0;
}
