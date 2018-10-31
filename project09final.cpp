/***********************************************************************
* Program:
*    Project 09, Mad lib         
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
#include <string.h>
using namespace std;

/*
* gets the file from user
*/
void getMadLib(char fileName[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> fileName;
   cin.ignore();
}

/*
* prints out and receives input
*/
void askInput(char input[], int x)
{
   char word[20];
   if (input[0] >= 97 && input[0] <= 122)
   {
      (input[0] = input[0] - 32);
      for (int a = 0; a <= 80; a++)
      {
         if (input[a] == '_')
         {
            input[a] = ' ';
         }
      }
      cout << "\t" << input << ": "; 
      cin.getline(word, 20);
   }
}

/*
* prints out words
*/
int findWords(char fileName[])
{
   int x = 0;   
   char madlib[1024];   
   char input[80];
   char j = 0;
   char line[80];
   int i = 0;
   ifstream fin(fileName);
   
   if (fin.fail())
   {
      cout << "can not read file\n";    
   }  
 
   while (fin >> madlib[i])
   {
      i++;
   }
      
   int end = strlen(madlib);
 
   for (i = 0; i <= end; i++)
   {
      if (madlib[i] == '<')
      {
         j = 0;
         while (madlib[i] != '>')
         {
            i++;
            input[j] = madlib[i];
            if (madlib[i] == '>')
            {
               input[j] = '\0';
               askInput(input, x);
               x++;
            }
            j++;
         }
      }     
   }
   fin.close();
}

/*
* calls functions
*/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   char fileName[100];
   
   getMadLib(fileName);
   findWords(fileName);
   
   cout << "Thank you for playing.\n";

   return 0;
}
