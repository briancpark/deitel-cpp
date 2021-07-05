// Fig. 2.9: fig02_09.cpp
// Class average program with sentinel-controlled repetition.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::setiosflags;

int main()
{
   int total,        // sum of grades
       gradeCounter, // number of grades entered
       grade;        // one grade       
   double average;   // number with decimal point for average

   // initialization phase
   total = 0;
   gradeCounter = 0;

   // processing phase
   cout << "Enter grade, -1 to end: ";    
   cin >> grade;                         

   while ( grade != -1 ) {                  
      total = total + grade;              
      gradeCounter = gradeCounter + 1;              
      cout << "Enter grade, -1 to end: "; 
      cin >> grade;                       
   }

   // termination phase
   if ( gradeCounter != 0 ) {     
      average = static_cast< double >( total ) / gradeCounter;   
      cout << "Class average is " << setprecision( 2 )
           << setiosflags( ios::fixed | ios::showpoint )
           << average << endl;
   }
   else
      cout << "No grades were entered" << endl;

   return 0;   // indicate program ended successfully
}



/**************************************************************************
 * (C) Copyright 2000 by Deitel & Associates, Inc. and Prentice Hall.     *
 * All Rights Reserved.                                                   *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
