// Fig. 2.7: fig02_07.cpp
// Class average program with counter-controlled repetition
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int total,        // sum of grades 
       gradeCounter, // number of grades entered
       grade,        // one grade
       average;      // average of grades

   // initialization phase
   total = 0;                           // clear total
   gradeCounter = 1;                    // prepare to loop

   // processing phase
   while ( gradeCounter <= 10 ) {       // loop 10 times
      cout << "Enter grade: ";          // prompt for input
      cin >> grade;                     // input grade
      total = total + grade;            // add grade to total
      gradeCounter = gradeCounter + 1;  // increment counter
   }

   // termination phase
   average = total / 10;                // integer division
   cout << "Class average is " << average << endl;

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
