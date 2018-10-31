/***********************************************************************
* Program:
*    Project 07, Calendar
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
using namespace std;

/*
* Prompt user for year
*/
int getYear()
{
   int year;
   cout << "Enter year: ";
   cin >> year;
   if ( year < 1753)
   {
      cout << "Year must be 1753 or later.\n";
      return getYear ();
      
   }
   return year;
}

/*
* Determine if the year is a leap year
*/
bool isLeap(int year)
{
   if (year % 400 == 0)
   {
      return true;
   }
   else if (year % 100 == 0)
   {
      return false;
   }
   else if (year % 4 == 0)
   {
      return true;
   }
   else 
   {
      return false;
   }
}

/*
* Calculate the number of days in a year
*/
int daysYear(int leap)
{
   if (leap)
   { 
      return 366;
   }
   else
   {
      return 365;
   }
}

/*
* Prompt user for month
*/
int getMonth()
{
   int month;
   cout << "Enter a month number: ";
   cin >> month;
   if (month < 1 || month > 12)
   {
      cout << "Month must be between 1 and 12.\n";
      return getMonth ();
   }
   return month;
}

/*
* Calculate number of days in a month
*/
int daysMonth(int year, int month, bool leap)
{
   int mDays = 0;
   if (month == 1) 
   {
      mDays = 0;
      return mDays;
   }
   else if (month == 2)
   {
      mDays = 31;
      return mDays;
   }
   else if (month == 3)
   {
      mDays = 59;
      return mDays;
   }
   else if (month == 4)
   {
      mDays = 90;
   }
   else if (month == 5)
   {
      mDays = 120;
   }
   else if (month == 6)
   {
      mDays = 151;
   }
   else if (month == 7)
   {
      mDays = 181;
   }
   else if (month == 8)
   {
      mDays = 212;
   }
   else if (month == 9)
   {
      mDays = 243;
   }
   else if (month == 10)
   {
      mDays = 273;
   }
   else if (month == 11)
   {
      mDays = 304;
   }
   else if (month == 12)
   {
      mDays = 334;
   }
   
   if (leap == 1)
   {
      mDays + 1;
   }
   return mDays; 
   
}

/*
* Computes number of days 
*/
int numDays(int month, int year, int mDays)
{
   int startYear = 1753;
   int numDays = 0;
   int sumDays = 0;

   while (startYear < year)
   {
      if (isLeap(startYear))
      {
         numDays += 366;
      }
      else
         numDays += 365;  
      startYear++ ; 
   }
   
   numDays += mDays;
   sumDays = numDays;
 
   return sumDays;
}
      

/*
* Computes what day of the week the month will start on
*/
int computeOffset(int sumDays)
{   
   int offset = sumDays % 7;
   return offset;
}

/*
* Display only table with offset
*/
void displayTable(int days, int offset)
{
   int blanks;
   int day = 1;
   if (offset == 6)
   {
      blanks = 0;
   }
   else
   {
      blanks = offset + 1;
   }
   
   cout << setw(4) << "Su"
        << setw(4) << "Mo"
        << setw(4) << "Tu"
        << setw(4) << "We"
        << setw(4) << "Th"
        << setw(4) << "Fr"
        << setw(4) << "Sa"
        << "\n"
        << setw(4 * blanks) << "";
    
   while (day <= days)
   {
      cout << setw(4) << day;
      if ((day + blanks) % 7 == 0)
      {
         cout << "\n";
      }
      day += 1;
   }
   
   if (offset != 4)
   {
      if ((days + offset) % 7 != 6)
      {
         cout << "\n";
      }
   }
}

/*
* Complete display
*/
int display(int year, int month, bool leap)
{ 
   int days = 1;
   
   cout << endl;
   
   if (month == 1)
   {
      cout << "January, ";
      days = 31;
   }
   
   else if (month == 2 && leap == 1)
   {
      cout << "February, ";
      days = 29;
   }
   
   else if (month == 2 && leap != 1)
   {
      cout << "February, ";
      days = 28;
   }
   
   else if (month == 3)
   {
      cout << "March, ";
      days = 31;
   }
   
   else if (month == 4)
   {
      cout << "April, ";
      days = 30;
   }
   
   else if (month == 5)
   {
      cout << "May, ";
      days = 31;
   }
   
   else if (month == 6)
   {
      cout << "June, ";
      days = 30;
   }
   
   else if (month == 7)
   {
      cout << "July, ";
      days = 31;
   }
   
   else if (month == 8)
   {
      cout << "August, ";
      days = 31;
   }
   
   else if (month == 9)
   {
      cout << "September, ";
      days = 30;
   }
   
   else if (month == 10)
   {
      cout << "October, ";
      days = 31;
   }
   
   else if (month == 11)
   {
      cout << "November, ";
      days = 30;
   }
   
   else if (month == 12)
   {
      cout << "December, ";
      days = 31;
   }
   cout << year << endl;
      
   return days;
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
   
   int gMonth = getMonth();
   int gYear = getYear();
   int leap = isLeap(gYear);
   int dMonth = daysMonth(gYear, gMonth, leap);
   int nDays = numDays(gMonth, gYear, dMonth);
   daysYear(leap);
   int cOffset = computeOffset(nDays);
   displayTable(display(gYear, gMonth, leap), cOffset);
   return 0;
}
