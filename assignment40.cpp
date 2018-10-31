/***********************************************************************
* Program:
*    Assignment 40, Multi-dimensional arrays         
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
*
*/
void getFileName(char filename[])
{
   cout << "Enter source filename: ";
    cin >> filename;
}
/*
*
*/
void displayGrid(char filename[])
{
   char data[3][3];
   
   ifstream fin(filename);
   
   for (int i = 0; i < 3; i++)
   {    
     for (int j = 0; j < 3; j++)
      {
         fin >> data[i][j];
         if (data[i][j] == '.')
         {
            data[i][j] = ' ';
         }
      }
   }
   
   cout << " " << data[0][0] << " | " << data[0][1] << " | " << data [0][2] << " \n"
        << "---+---+---" << endl
        << " " << data[1][0] << " | " << data[1][1] << " | " << data [1][2] << " \n"
        << "---+---+---" << endl
        << " " << data[2][0] << " | " << data[2][1] << " | " << data [2][2] << " \n";

   fin.close();
   
   char newfile[100];
   
   cout << "Enter destination filename: ";
    cin >> newfile;
    ofstream fout(newfile);
    
   for (int i = 0; i < 3; i++)
   {    
     for (int j = 0; j < 3; j++)
      {
         fin >> data[i][j];
         if (data[i][j] == ' ')
         {
            data[i][j] = '.';
         }
      }
    }
   fout << " " << data[0][0] << data[0][1] << data [0][2] << " \n"
        << " " << data[1][0] << data[1][1] << data [1][2] << " \n"
        << " " << data[2][0] << data[2][1] << data [2][2] << " \n";
        
   fout.close();
   
   if (fout.fail())
   {
      cout << "File not written";
   }
   else 
   {
      cout << "File written\n";
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
   
   char filename[100];
   
   getFileName(filename);
   displayGrid(filename);

   return 0;
}
