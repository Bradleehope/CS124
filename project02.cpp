/***********************************************************************
* Program:
*    Assignment, Project 02 Monthly Budget       
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    Monthly budget
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
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   
   float income;
   float living;
   float actual;
   float taxes;
   float tithe;
   float other;
   
   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";
   cout << "\tYour monthly income: "; 
   cin >> income;
   cout << "\tYour budgeted living expenses: ";
   cin >> living;
   cout << "\tYour actual living expenses: ";
   cin >> actual;
   cout << "\tYour actual taxes withheld: ";
   cin >> taxes;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithe;
   cout << "\tYour actual other expenses: ";
   cin >> other;
   cout << "\n"
        << "The following is a report on your monthly expenses\n"
        << setw(16) << left << "\tItem" << setw(13) << right << "Budget" << setw(17) << right << "Actual\n"
        << "\t=============== =============== ===============\n"
        << setw(17) << left << "\tIncome" << "$" << setw(11) << right << income << setw(5) << "$" << setw(11) << right << income << "\n"
        << setw(17) << left << "\tTaxes" << "$" << setw(11) << right << "0.00" << setw(5) << "$" << setw(11) << right << taxes << "\n"
        << setw(17) << left << "\tTithing" << "$" << setw(11) << right << "0.00" << setw(5) << "$" << setw(11) << right << tithe << "\n"
        << setw(17) << left << "\tLiving" << "$" << setw(11) << right << living << setw(5) << "$" << setw(11) << right << actual << "\n"
        << setw(17) << left << "\tOther" << "$" << setw(11) << right << "0.00" << setw(5) << "$" << setw(11) << right << other << "\n"
        << "\t=============== =============== ===============\n" 
        << setw(17) << left << "\tDifference" << "$" << setw(11) << right << "0.00" << setw(5) << "$" << setw(11) << right << "0.00" << "\n";
        
   return 0;
}
