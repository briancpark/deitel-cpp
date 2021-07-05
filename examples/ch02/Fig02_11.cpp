// Fig. 2.11: fig02_11.cpp
// Analysis of examination results
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   // initialize variables in declarations
   int passes = 0,           // number of passes
       failures = 0,         // number of failures
       studentCounter = 1,   // student counter
       result;               // one exam result

   // process 10 students; counter-controlled loop
   while ( studentCounter <= 10 ) {
      cout << "Enter result (1=pass,2=fail): ";
      cin >> result;

      if ( result == 1 )        // if/else nested in while
         passes = passes + 1;
      else
         failures = failures + 1;

      studentCounter = studentCounter + 1;
   }

   // termination phase
   cout << "Passed " << passes << endl;
   cout << "Failed " << failures << endl;

   if ( passes > 8 )
      cout << "Raise tuition " << endl;

   return 0;   // successful termination
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
