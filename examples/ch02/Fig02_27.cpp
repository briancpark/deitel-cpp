// Fig. 2.27: fig02_07.cpp
// Using the continue statement in a for structure
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   for ( int x = 1; x <= 10; x++ ) {

      if ( x == 5 )
         continue;  // skip remaining code in loop
                    // only if x is 5

      cout << x << " ";
   }

   cout << "\nUsed continue to skip printing the value 5" 
       << endl;
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
