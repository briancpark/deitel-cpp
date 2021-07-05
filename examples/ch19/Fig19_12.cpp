// Fig. 19.12: fig19_12.cpp
// Demonstrating input from an istringstream object.
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

#include <sstream>

using std::istringstream;

int main()
{
   string input( "Input test 123 4.7 A" );
   istringstream inputString( input );
   string string1, string2;
   int i;
   double d;
   char c;

   inputString >> string1 >> string2 >> i >> d >> c;

   cout << "The following items were extracted\n"
        << "from the istringstream object:"
        << "\nstring: " << string1 
        << "\nstring: " << string2 
        << "\n   int: " << i 
        << "\ndouble: " << d 
        << "\n  char: " << c;

   // attempt to read from empty stream
   long x;

   inputString >> x;

   if ( inputString.good() )
      cout << "\n\nlong value is: " << x << endl;
   else
      cout << "\n\ninputString is empty" << endl;

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
