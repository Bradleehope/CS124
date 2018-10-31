/***********************************************************************
* Program:
*    Assignment 00, Practice test         
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
#include <fstream>
using namespace std;

void getPetAges (char fileName[])
{
   cout << "Please enter the filename: ";
   cin >> fileName;
}


float readPetAges(char fileName[])
{
   float data;
   int count = 0;
   ifstream fin(fileName);
   
   if (fin.fail())
   {
      return -1;    
   }   
   while (fin >> data)
   {
      int number = (data > 4);
      return data;
   }

   fin.close();
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.precision(0);

   char fileName[100];
   getPetAges(fileName);
   cout << "data: " << readPetAges(fileName) << endl; 
   return 0;
}
