/***********************************************************************
* Program:
*    Assignment, week2-fri      
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
using namespace std;

void displayFirstVerse()

{
 cout << "I am a child of God,\n"
      << "And he has sent me here,\n"
      << "Has given me an earthly home\n"
      << "With parents kind and dear.\n"
      << "\n";       
}

void displayChorus()

{
 cout << "Lead me, guide me, walk beside me,\n"
      << "Help me find the way.\n"
      << "Teach me all that I must do\n"
      << "To live with him someday.\n"
      << "\n";
}

void displaySecondVerse()

{
 cout << "I am a child of God,\n"
      << "And so my needs are great;\n"
      << "Help me to understand his words;\n"
      << "Before it grows too late.\n"
      << "\n";
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   displayFirstVerse();
   displayChorus();
   displaySecondVerse();
   displayChorus();
   return 0;
}
