/***********************************************************************
* Program: Rothwell
* Author: Bradlee Rothwell
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int getName()
{
   int name;
   
   cout << "What is your name?" << endl;
        switch(name)
        {
           case 'Bryten':
              cout << "Hello Bryten!" << endl;
              break;
           case 'Bradlee':
              cout << "Hello Bradlee! " << endl;
        }
   cin  >> name;
   
   return name;
}

void skills(int name)
{
   int brad;
   int collette;
   int bradlee;
   int brenyn;
   int bryten;
   
   if (name == 1)
   {
      cout << "Brad/Dad: "
           << "\tSkills: " << endl
           << "\tsuperhero consultant" << endl;
   }
   else if (name == 2)
   {
      cout << "Collette/Mom: "
           << "\tSkills: " << endl
           << "\tnone" << endl; 
   }        
   else if (name == 3)
   {
      cout << "Bradlee: "
           << "\tSkills: " << endl
           << "\tchocolate milk connoisseur" << endl
           << "\tHarry Potter wizard" << endl
           << "\tmovie enthusiast" << endl;
   }
   else if (name == 4)
   {
      cout << "Brenyn: " 
           << "\tSkills: " << endl
           << "\tnone" << endl;
           
   }
   else if (name == 5)
   {
      cout << "Bryten: " 
           << "\tSkills: " << endl
           << "\tTennis wizard" << endl
           << "\tReader of books" << endl
           << "\tGolden little angel from heaven" << endl
           << "\tDragon lord" << endl
           << "\tNetflix watcher" << endl;
   }
   else if (name == 6)
   {
      cout << "Please join the Rothwell Family" << endl;
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
   
   skills(getName());

   return 0;
}
