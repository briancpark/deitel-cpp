// Fig. 21.1: fig21_01.cpp
// Demonstrating data type bool.
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::boolalpha;

int main()
{
   bool boolean = false;
   int x = 0;

   cout << "boolean is " << boolean
        << "\nEnter an integer: ";
   cin >> x;

   cout << "integer " << x << " is"
        << ( x ? " nonzero " : " zero " )
        << "and interpreted as ";

   if ( x )
      cout << "true\n";
   else
      cout << "false\n";

   boolean = true;
   cout << "boolean is " << boolean;
   cout << "\nboolean output with boolalpha manipulator is " 
        << boolalpha << boolean << endl;

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
