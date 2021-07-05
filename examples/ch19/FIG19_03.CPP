// Fig. 19.3: fig19_03.cpp
// Demonstrating function substr
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main()
{
   string s( "The airplane flew away." );

   // retrieve the substring "plane" which
   // begins at subscript 7 and consists of 5 elements
   cout << s.substr( 7, 5 ) << endl;

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
