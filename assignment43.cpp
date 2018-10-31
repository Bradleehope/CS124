/***********************************************************************
* Program:
*    Assignment 43, Command Line         
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    Conversion of feet to meters
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

/*
*
*/
void conversion(int argc, char ** argv)
{
   int x = 0;
   float convert = 0.3048;

   for (x = 1; x < argc; x++)
   {
      atof(argv[x]);
      float meters = 0;
      meters = atof(argv[x]) * convert;
   
      cout << atof(argv[x]) << " feet is " << meters << " meters\n";
   }
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS. 
 ***********************************************************************/
int main(int argc, char ** argv)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
   
   conversion(argc, argv);

   return 0;
}
