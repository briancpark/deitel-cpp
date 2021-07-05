// Fig. 19.10: fig19_10.cpp
// Using an iterator to output a string.
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main()
{
   string s( "Testing iterators" );
   string::const_iterator i1 = s.begin();

   cout << "s = " << s
        << "\n(Using iterator i1) s is: ";

   while ( i1 != s.end() ) {
      cout << *i1;    // dereference iterator to get char
      ++i1;           // advance iterator to next char
   }

   cout << endl;
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
