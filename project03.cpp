/***********************************************************************
* Program:
*    Assignment, Project 03 Monthly Budget       
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

float displayIncome()
{
float income;
   cout << "\tYour monthly income: "; 
   cin >> income;
return income;
}

float displayBudgetLiving()
{
float living;  
   cout << "\tYour budgeted living expenses: ";
   cin >> living;
return living;
}

float displayActual()
{
float actual;
   cout << "\tYour actual living expenses: ";
   cin >> actual;
return actual;
}

float displayTaxes()
{
float taxes;
   cout << "\tYour actual taxes withheld: ";
   cin >> taxes;
return taxes;
}

float displayTithing()
{
float tithe;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithe;
return tithe;
}


float displayOther()
{
float other;
   cout << "\tYour actual other expenses: ";
   cin >> other;
   cout << "\n";
return other;
}

void displayReport(float income, float living, float actual, float taxes, float tithe, float other)
{
float budgetTax = 0;
float budgetTithing = (income * 0.1);
float budgetOther = (income - budgetTax - budgetTithing - living);
//IncomeReport
   cout << setw(17) << left << "\tIncome" 
        << "$" << setw(11) << right << income 
        << setw(5) << "$" 
        << setw(11) << right << income << "\n";
//TaxesReport
   cout << setw(17) << left << "\tTaxes" 
        << "$" << setw(11) << right << "0.00" 
        << setw(5) << "$" 
        << setw(11) << right << taxes << "\n";
//TithingReport
   cout << setw(17) << left << "\tTithing" 
        << "$" << setw(11) << right 
        << budgetTithing 
        << setw(5) << "$" 
        << setw(11) << right << tithe << "\n"; 
//LivingReport
   cout << setw(17) << left << "\tLiving" 
        << "$" << setw(11) << right << living 
        << setw(5) << "$" 
        << setw(11) << right << actual << "\n";        
//OtherReport   
   cout << setw(17) << left << "\tOther" 
        << "$" << setw(11) << right
        << budgetOther
        << setw(5) << "$" 
        << setw(11) << right << other << "\n";
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
   
   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";
   float IncomeReturn = displayIncome();
   float BudgetReturn = displayBudgetLiving();
   float ActualReturn = displayActual();
   float TaxesReturn = displayTaxes();
   float TithingReturn = displayTithing();
   float OtherReturn = displayOther();
   float actualDif = (IncomeReturn - TaxesReturn - TithingReturn - ActualReturn - OtherReturn);
   cout << "The following is a report on your monthly expenses\n"
        << setw(16) << left << "\tItem" 
        << setw(13) << right << "Budget" 
        << setw(17) << right << "Actual\n"
        << "\t=============== =============== ===============\n";
   displayReport(IncomeReturn, BudgetReturn, ActualReturn, TaxesReturn, TithingReturn, OtherReturn);
   cout << "\t=============== =============== ===============\n" 
        << setw(17) << left << "\tDifference" 
        << "$" << setw(11) << right << "0.00" 
        << setw(5) << "$" << setw(11) << right
        << actualDif
        << "\n";
        
   return 0;
}
