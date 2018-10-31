/***********************************************************************
* Program:
*    Project 04, Monthly Budget       
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    Monthly budget with calculations of tax and tithing 
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/* 
* This function will first ask user for income
*/
double displayIncome()
{
   double income;
   cout << "\tYour monthly income: "; 
   cin >> income;
   return income;
}

/*
* This function will ask for the budgeted living expenses
*/
double displayBudgetLiving()
{ 
   double living;  
   cout << "\tYour budgeted living expenses: ";
   cin >> living;
   return living;
}

/*
* This function will ask for actual living expenses
*/
double displayActual()
{
   double actual;
   cout << "\tYour actual living expenses: ";
   cin >> actual;
   return actual;
}

/*
* This function will ask for actual taxes
*/
double displayTaxes()
{
   double taxes;
   cout << "\tYour actual taxes withheld: ";
   cin >> taxes;
   return taxes;
}

/*
* This function will ask for actual tithing
*/
double displayTithing()
{
   double tithe;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithe;
   return tithe;
}

/*
* This function will ask for other expenses
*/
double displayOther()
{
   double other;
   cout << "\tYour actual other expenses: ";
   cin >> other;
   cout << "\n";
   return other;
}

/*
* This function will calculate the tax bracket
*/
double budgetTax(double income)
{
   double yearlyTax;
   double monthlyTax;
   double yearlyIncome = (income * 12);
     
   if (yearlyIncome > 0 && yearlyIncome < 15100)
   {
      yearlyTax = (.10 * yearlyIncome);
   }

   else if (yearlyIncome < 61300)
   {
      yearlyTax = (1510 + (yearlyIncome - 15100) * .15);
   }
      
   else if (yearlyIncome < 123700)
   {
      yearlyTax = (8440 + (yearlyIncome - 61300) * .25);
   }
      
   else if (yearlyIncome < 188450)
   {
      yearlyTax = (24040 + (yearlyIncome - 123700) * .28);
   }  
      
   else if (yearlyIncome < 336550)
   {
      yearlyTax = (42170 + (yearlyIncome - 188450) * .33);
   }
     
   else if (yearlyIncome > 336550)
   {
      yearlyTax = (91043 + (yearlyIncome - 336550) * .35);
   }
   monthlyTax = (yearlyTax / 12);
   return monthlyTax;
}            

/*
* This function will display the report
*/
void displayReport(double income, double bTax, double living, 
   double actual, double taxes, double tithe, double other)
{
   double budgetTithing = (income * 0.1);
   double budgetOther = (income - bTax - budgetTithing - living);
//incomeReport
   cout << setw(17) << left << "\tIncome" 
        << "$" << setw(11) << right << income 
        << setw(5) << "$" 
        << setw(11) << right << income << "\n";
//taxesReport
   cout << setw(17) << left << "\tTaxes" 
        << "$" << setw(11) << right 
        << bTax
        << setw(5) << "$" 
        << setw(11) << right << taxes << "\n";
//tithingReport
   cout << setw(17) << left << "\tTithing" 
        << "$" << setw(11) << right 
        << budgetTithing 
        << setw(5) << "$" 
        << setw(11) << right << tithe << "\n"; 
//livingReport
   cout << setw(17) << left << "\tLiving" 
        << "$" << setw(11) << right << living 
        << setw(5) << "$" 
        << setw(11) << right << actual << "\n";        
//otherReport   
   cout << setw(17) << left << "\tOther" 
        << "$" << setw(11) << right
        << budgetOther
        << setw(5) << "$" 
        << setw(11) << right << other << "\n";
}

/**********************************************************************
* Displays the table 
 ***********************************************************************/
int main()

{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";
   double iReturn = displayIncome();
   double bReturn = displayBudgetLiving();
   double aReturn = displayActual();
   double taReturn = displayTaxes();
   double tiReturn = displayTithing();
   double oReturn = displayOther();
   double bTax = budgetTax(iReturn);
   double actualDif = (iReturn - taReturn - tiReturn - aReturn - oReturn);
   cout << "The following is a report on your monthly expenses\n"
        << setw(16) << left << "\tItem" 
        << setw(13) << right << "Budget" 
        << setw(17) << right << "Actual\n"
        << "\t=============== =============== ===============\n";
   displayReport(iReturn, bTax, bReturn, aReturn, taReturn, tiReturn, oReturn);
   cout << "\t=============== =============== ===============\n" 
        << setw(17) << left << "\tDifference" 
        << "$" << setw(11) << right << "0.00" 
        << setw(5) << "$" << setw(11) << right
        << actualDif
        << "\n";
        
   return 0;
}
