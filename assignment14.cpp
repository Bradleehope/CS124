/***********************************************************************
* Program:
*    Assignment, 14 Peter's Question          
*    Brother Cook, CS124
* Author:
*    Bradlee Rothwell
* Summary: 
*   Peter's question to the Lord
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * RETURN NOTHING
 * This function will not return anything. Its only purpose is 
 * to display text on the screen. In this case, it will display
 * the question Peter asks the Lord
 ***********************************************************************/
void questionPeter()
{
   // ask Peter's question
   cout << "Lord, how oft shall my brother sin against me, and I forgive him?\n"
        << "Till seven times?"
        << "\n";
}

void responseLord()
{
   cout << (7 * 70);
}

/***********************************************************************
 * RETURN A VALUE
 * This function will display the Lord's response
************************************************************************/
int main()

{
   questionPeter();
   
   cout << "Jesus saith unto him, I say not unto thee, Until seven\n"
        << "times: but, Until "; 
           responseLord(); 
   cout << ".\n";
         
   return 0;
}
