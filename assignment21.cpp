/***********************************************************************
* Program:
*    Assignment 21,        
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

int promptMileage()
{
   float mileage;
   return mileage; 
} 

int promptGas()
{
   float gas;
   return gas; 
} 

int promptRepairs()
{
   float repairs;
   return repairs; 
} 

int promptTires()
{
   float tires;
   return tires; 
} 

int getUsageCost()
{
   float tires = promptTires();
   float repairs = promptRepairs(); 
   float gas = promptGas();
   float mileage = promptMileage();
   float costUsage = ((tires + repairs + gas) * mileage);
   return costUsage;
}

int promptDevalue()
{
   float devalue;
   return devalue;
}

int promptInsurance()
{
   float insurance;
   return insurance;
}

int promptParking()
{
   float parking;
   return parking;
}

int getPeriodicCost()
{
   float devalue = promptDevalue();
   float insurance = promptInsurance();
   float parking = promptParking();
   float total = (devalue + insurance + parking);
   return total;
} 

int display()
{
   float costUsage();
   float costPeriodic();
   cout << "Success\n";
   return 0;
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

   display();
   return 0;
}
