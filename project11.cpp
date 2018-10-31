/***********************************************************************
* Program:
*    Project 11, Sudoku
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
#include <cstdlib>
using namespace std;

/*
* This function will get the file name 
*/
void getFile(char fileName[])
{ 
   cout << "Where is your board located? ";
   cin >> fileName;
   cin.ignore();
}

/*
* This function will display the instructions
*/
void displayInstructions()
{
   cout << "Sudoku is a logic-based,combinatorial number-placement puzzle.\n"
        << "The objective is to fill a 9x9 grid with digits so that each \n" 
        << "column, each row, and each of the nine 3x3 subgrids that compose\n"
        << "the grid contains all of the digits from 1 to 9." 
        << endl;
}

/*
* This function will display the board's answers
*/
void displayAnswers()
{
   char coordinates[2];

   cout << "What are the coordinates of the square: ";
    cin >> coordinates[0] >> coordinates[1];
    
   cout << "The possible values for '" << coordinates[0] << coordinates[1]
        << "' are: ";
  
}

/*
*
*/

void displayOriginalBoard(char fileName[], char board[][9])
{    
   ifstream fin(fileName);
   
   for (int i = 0; i < 9; i++)
   {    
     for (int j = 0; j < 9; j++)
      {
         fin >> board[i][j];
         if (board[i][j] == '0')
         {
            board[i][j] = ' ';
         }
      }
   }
   
   cout << "   A B C   D E F   G H I\n"
        << "1  " << board[0][0] << " " << board[0][1] << " " << board[0][2] 
        << " | "   //row 1 
        << board[0][3] << " " << board[0][4] << " " << board[0][5] << " | "        
        << board[0][6] << " " << board[0][7] << " " << board[0][8] << endl;
    
   cout << "2  " << board[1][0] << " " << board[1][1] << " " << board[1][2] 
        << " | "   //row 2
        << board[1][3] << " " << board[1][4] << " " << board[1][5] << " | "
        << board[1][6] << " " << board[1][7] << " " << board[1][8] << endl;
   
   cout << "3  " << board[2][0] << " " << board[2][1] << " " << board[2][2] 
        << " | "   //row 3
        << board[2][3] << " " << board[2][4] << " " << board[2][5] << " | "
        << board[2][6] << " " << board[2][7] << " " << board[2][8] << endl
        << "   ------+-------+------" << endl;
        
   cout << "4  " << board[3][0] << " " << board[3][1] << " " << board[3][2] 
        << " | "   //row 4
        << board[3][3] << " " << board[3][4] << " " << board[3][5] << " | "
        << board[3][6] << " " << board[3][7] << " " << board[3][8] << endl;
        
   cout << "5  " << board[4][0] << " " << board[4][1] << " " << board[4][2] 
        << " | "   //row 5
        << board[4][3] << " " << board[4][4] << " " << board[4][5] << " | "
        << board[4][6] << " " << board[4][7] << " " << board[4][8] << endl;
        
   cout << "6  " << board[5][0] << " " << board[5][1] << " " << board[5][2] 
        << " | "   //row 6
        << board[5][3] << " " << board[5][4] << " " << board[5][5] << " | "
        << board[5][6] << " " << board[5][7] << " " << board[5][8] << endl
        << "   ------+-------+------" << endl;
        
   cout << "7  " << board[6][0] << " " << board[6][1] << " " << board[6][2] 
        << " | "   //row 7
        << board[6][3] << " " << board[6][4] << " " << board[6][5] << " | "
        << board[6][6] << " " << board[6][7] << " " << board[6][8] << endl;
   
   cout << "8  " << board[7][0] << " " << board[7][1] << " " << board[7][2] 
        << " | " //row 8
        << board[7][3] << " " << board[7][4] << " " << board[7][5] << " | "
        << board[7][6] << " " << board[7][7] << " " << board[7][8] << endl;
        
   cout << "9  " << board[8][0] << " " << board[8][1] << " " << board[8][2] 
        << " | " //row 9
        << board[8][3] << " " << board[8][4] << " " << board[8][5] << " | "
        << board[8][6] << " " << board[8][7] << " " << board[8][8] << endl;

   fin.close();
   
}

/*
* This function will display the board
*/
void displayMainBoard(char fileName[], char board[][9], int value[])
{    
   ifstream fin(fileName);
   
   for (int i = 0; i < 9; i++)
   {    
     for (int j = 0; j < 9; j++)
      {
         fin >> board[i][j];
         if (board[i][j] == '0')
         {
            board[i][j] = ' ';
         }
      }
   }
   
   cout << "   A B C   D E F   G H I\n"
        << "1  " << board[0][0] << " " << board[0][1] << " " << board[0][2] 
        << " | "   //row 1 
        << board[0][3] << " " << board[0][4] << " " << board[0][5] << " | "        
        << board[0][6] << " " << board[0][7] << " " << board[0][8] << endl;
    
   cout << "2  " << board[1][0] << " " << board[1][1] << " " << board[1][2] 
        << " | "   //row 2
        << board[1][3] << " " << board[1][4] << " " << board[1][5] << " | "
        << board[1][6] << " " << board[1][7] << " " << board[1][8] << endl;
   
   cout << "3  " << board[2][0] << " " << board[2][1] << " " << board[2][2] 
        << " | "   //row 3
        << board[2][3] << " " << board[2][4] << " " << board[2][5] << " | "
        << board[2][6] << " " << board[2][7] << " " << board[2][8] << endl
        << "   ------+-------+------" << endl;
        
   cout << "4  " << board[3][0] << " " << board[3][1] << " " << board[3][2] 
        << " | "   //row 4
        << board[3][3] << " " << board[3][4] << " " << board[3][5] << " | "
        << board[3][6] << " " << board[3][7] << " " << board[3][8] << endl;
        
   cout << "5  " << board[4][0] << " " << board[4][1] << " " << board[4][2] 
        << " | "   //row 5
        << board[4][3] << " " << board[4][4] << " " << board[4][5] << " | "
        << board[4][6] << " " << board[4][7] << " " << board[4][8] << endl;
        
   cout << "6  " << board[5][0] << " " << board[5][1] << " " << board[5][2] 
        << " | "   //row 6
        << board[5][3] << " " << board[5][4] << " " << board[5][5] << " | "
        << board[5][6] << " " << board[5][7] << " " << board[5][8] << endl
        << "   ------+-------+------" << endl;
        
   cout << "7  " << board[6][0] << " " << board[6][1] << " " << board[6][2] 
        << " | "   //row 7
        << board[6][3] << " " << board[6][4] << " " << board[6][5] << " | "
        << board[6][6] << " " << board[6][7] << " " << board[6][8] << endl;
   
   cout << "8  " << board[7][0] << " " << board[7][1] << " " << board[7][2] 
        << " | " //row 8
        << board[7][3] << " " << board[7][4] << " " << board[7][5] << " | "
        << board[7][6] << " " << board[7][7] << " " << board[7][8] << endl;
        
   cout << "9  " << board[8][0] << " " << board[8][1] << " " << board[8][2] 
        << " | " //row 9
        << board[8][3] << " " << board[8][4] << " " << board[8][5] << " | "
        << board[8][6] << " " << board[8][7] << " " << board[8][8] << endl;

   fin.close();
   
}

/*
*
*/


/*
* This function will save the board as a new file
*/
void saveBoard()
{
char newfile[81];
char board[9][9];
   
   cout << "What file would you like to write your board to: ";
    cin >> newfile;
    ofstream fout(newfile);
        
   fout.close();
   
   if (fout.fail())
   {
      cout << "Board not written";
   }
   else 
   {
      cout << "Board written successfully\n";
   }
}

/*
* This function will allow the user to edit a square
*/
int displayEdit(char board[][9])
{
   char coordinates[2];

   cout << "What are the coordinates of the square: ";
    cin >> coordinates[0] >> coordinates[1];
   
   if (coordinates[0] >= 65 && coordinates[0] <= 73)
   {
      int input;
      int value[3];
      value[0] = (coordinates[0] - 65);
      value[1] = (coordinates[1] - 49);
      
      cout << "What is the value at '" << coordinates[0] << coordinates[1] << "':";
      cin >> input;
      value[2] = input;
      cout << value[0] << value[1] << value[2] <<endl;
      
      return value[3];
      
      //65-73
      //#-65 = column
      // # - 1 = row 
      //colummn row value
   }
   else
   {
      cout << "ERROR: Square '" << coordinates[0] << coordinates[1] << "' is invalid";
   }
}

/*
* This function will get option input 
*/
char getOption()
{
   char input;
   cout << endl << "> ";
   cin >> input;
   /*if (input != '?', 'D', 'E', 'S', 'Q')
   {
      cout << "ERROR: Invalid command";
   }
   else
   {
      return input;
   }*/
} 

/*
* This function will allow to see options 
*/
int displayOptions(char fileName[], char board[][9])
{
   cout << "Options:\n"
        << "   ?  Show these instructions\n"
        << "   D  Display the board\n"
        << "   E  Edit one square\n"
        << "   S  Show the possible values for a square\n"
        << "   Q  Save and quit\n";

   cout << endl;
   displayMainBoard(fileName, board);            
    
    switch(getOption())
    {
       case '?':
          displayInstructions();
          break;
       case 'D':
          displayOriginalBoard(fileName, board);
          break;
       case 'E':
          displayEdit(board);
          break;
       case 'S':
          displayAnswers();
          break;
       case 'Q':
          saveBoard();
          break;
    }     
}

/*
* 
*/

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main(int argc, char ** argv)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   char fileName[81];
   char board[9][9];
   int stop = 0;
   
      getFile(fileName);
   do 
   {
      displayOptions(fileName, board);
   }
   while (stop = 0);

   return 0;
}
