/***********************************************************************
* Program:
*    Assignment 16, Tax Bracket        
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    This program will determine what tax bracket the user is in 
*    and give the percentage
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
//this function calculates tex bracket and then returns the number for the percent
int computeTax(float income)
{
   int ten;
   int fifteen;
   int twentyfive;
   int twentyeight;
   int thirtythree;
   int thirtyfive;
   
   if (income > 0 && income < 15100)
   {
      ten = 10;
      return ten;
   }

   else if (income < 61300)
   {
      fifteen = 15;
      return fifteen;
   }
      
   else if (income < 123700)
   {
      twentyfive = 25;
      return twentyfive;
   }
      
   else if (income < 188450)
   {
      twentyeight = 28;
      return twentyeight;
   }  
      
   else if (income < 336550)
   {
      thirtythree = 33;
      return thirtythree;
   }
     
   else if (income > 336550)
   {
      thirtyfive = 35;
      return thirtyfive;
   }
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
   
   int income;
   int bracketTax;
   cout << "Income: ";
   cin >> income;
   if (bracketTax = computeTax(income));
   cout << "Your tax bracket is " << bracketTax << "%\n";
      
   return 0;
}
