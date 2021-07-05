// Fig. 19.8: fig19_08.cpp
// Demonstrating the string insert functions.
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main()
{
   string s1( "beginning end" ),
          s2( "middle " ), s3( "12345678" ), s4( "xx" );

   cout << "Initial strings:\ns1: " << s1
        << "\ns2: " << s2 << "\ns3: " << s3
        << "\ns4: " << s4 << "\n\n";

   // insert "middle" at location 10
   s1.insert( 10, s2 );

   // insert "xx" at location 3 in s3
   s3.insert( 3, s4, 0, string::npos );

   cout << "Strings after insert:\ns1: " << s1
        << "\ns2: " << s2 << "\ns3: " << s3
        << "\ns4: " << s4 << endl;

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
