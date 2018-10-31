/***********************************************************************
* Program:
*    Assignment 41,Allocating Memory         
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*    This program will use the getline function
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void getString()
{
   int numchar;

   cout << "Number of characters: ";
    cin >> numchar;
    
   char * text = new(nothrow) char [numchar + 1];
   
   if (numchar <= 0)
   {
      cout << "Allocation failure!\n";
   }
    
   else 
   {
      cout << "Enter Text: ";
      cin.ignore();
      cin.getline(text, numchar + 1);
      cout << "Text: " << text << endl;
   }
}


/*void questions()
{
   char book[100];
   cout << "Favorite Book? :";
   cin.getline (book, 100);
   cout << endl << book;
    
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

   getString();

   return 0;
}
