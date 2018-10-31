/***********************************************************************
* Program:
*    Assignment 35, Advanced Conditionals          
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
* This function will take the number grade and find corresponding letter grade
*/
char computeLetterGrade(int numGrade)
{
   char grade;
   char A;
   
   switch(numGrade)
   {
      case 100:
      case 99:
      case 98:
      case 97:
      case 96:
      case 95:
      case 94:
      case 93:
      case 92:
      case 91:
      case 90:
         grade = 'A';
         break;
      case 89:
      case 88:
      case 87:
      case 86:
      case 85:
      case 84:
      case 83:
      case 82:
      case 81:
      case 80:
         grade = 'B';
         break;   
      case 79:
      case 78:
      case 77:
      case 76:
      case 75:
      case 74:
      case 73:
      case 72:
      case 71:
      case 70:
         grade = 'C';
         break;
      case 69:
      case 68:
      case 67:
      case 66:
      case 65:
      case 64:
      case 63:
      case 62:
      case 61:
      case 60:
         grade = 'D';
         break;
         
      default:
         grade = 'F'; 
         break; 
   } 
   return grade;
}

/*
* this function will take letter grade and add the sign for it. 
*/
void computeGradeSign(int numGrade)
{

   if (numGrade >= 90) 
   {   
      cout << (numGrade < 93 ? "-" : "");    
   }
   
   if (numGrade >= 80 && numGrade <= 89) 
   {   
      cout << (numGrade > 86 ? "+" : "")
           << (numGrade < 83 ? "-" : "");     
   }
   
   if (numGrade >= 70 && numGrade <= 79) 
   {   
      cout << (numGrade > 76 ? "+" : "")
           << (numGrade < 73 ? "-" : "")
           << endl;    
   }
   
   else 
   {
      cout << endl;
   }
//- for 0,1,2 except for F
//+ for 7,8,9 except for A and F

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
   
   int numGrade; 
   cout << "Enter number grade: ";
    cin >> numGrade;
   cout << numGrade << "% is "  
        << computeLetterGrade(numGrade);
           computeGradeSign(numGrade);
      
   return 0;
}
