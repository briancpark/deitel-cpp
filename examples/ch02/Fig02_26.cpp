// Fig. 2.26: fig02_26.cpp
// Using the break statement in a for structure
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // x declared here so it can be used after the loop
   int x; 

   for ( x = 1; x <= 10; x++ ) {

      if ( x == 5 )
         break;    // break loop only if x is 5

      cout << x << " ";
   }

   cout << "\nBroke out of loop at x of " << x << endl;
   return 0;
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
