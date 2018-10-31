/***********************************************************************
* Program:
*    Assignment 26, Files         
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

/*
* Prompt for name of file and return it 
*/
void getFileName(char fileName[])
{
   cout << "Please enter the filename: ";
   cin >> fileName;
}

/*
* Read file and return average score 
*/
float readFile(char fileName[])
{
      
   float data;
   int count = 0;
   float sum = 0;
   float average = 0;
   ifstream fin(fileName);
   
   if (fin.fail())
   {
      average = -1;    
   }   
   while (fin >> data)
   {
      sum += data;
      average = ( sum / 10);
      count++;
   }
   if (count != 10)
   {
      average = -1;
   } 
   fin.close();
   return average;
}

/*
* Display average 
*/
void display(float average, char fileName[])
{
   if (average != -1)
   {
      cout << "Average Grade: " << average
           << "%\n";
   }
   
   else 
   {
      cout << "Error reading file " 
           << "\"" << fileName << "\"" << "\n"; 
   }
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
   getFileName(fileName);
   display(readFile(fileName), fileName);
   

   return 0;
}
