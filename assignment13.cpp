/***********************************************************************
* Program:
*    Assignment 13        
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*   conversion of Fahrenheit to Celsius
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
   cout.precision(0);
   
   float f;
   float c;
   float divide;
   
  cout << "Please enter Fahrenheit degrees: ";
  cin >> f;
  divide = 5.0 / 9 * (f - 32);
  c = divide;
  cout << "Celsius: " << c << "\n";
  
   return 0;
}
