/***********************************************************************
* Program:
*    Assignment 32, Strings         
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
* Number of letters in a string
*/
int countLetters(char letter[], char phrase[])
{
   int x = 0;
   int count = 0;
   for ( x ; x < 300 ; x++)
   {
      if (letter[0] == phrase[x])
      {
         count++ ;
      }
   }
   return count; 
}

/**********************************************************************
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   char letter[2] = "";
   char phrase[300] = {" "};
   int countL = 0;
   cout << "Enter a letter: ";
   cin >> letter;
   cout << "Enter text: ";
   cin.ignore();
   cin.getline(phrase,300);

   countL = countLetters(letter, phrase);
   cout << "Number of '" << letter << "'s: " << countL << endl;
   return 0;
}
