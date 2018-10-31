/***********************************************************************
* Program:
*    Assignment 34, Pointers
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*   
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
int countLetters(char letter, char phrase[])
{
   int count = 0;
   for (int x = 0; x < 100; x++)
   
   char * pPhrase;
   
   pPhrase 
   
   if (letter[0]
   
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

   char letter;
   char phrase[100];
   int countL = 0;
   cout << "Enter a letter: ";
   cin >> letter;
   cout << "Enter text: ";
   cin.ignore();
   cin.getline(phrase, 100);

   countL = countLetters(letter, phrase);
   cout << "Number of '" << letter << "'s: " << countL << endl;
   return 0;
}
