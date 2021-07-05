// Fig. 20.26: fig20_26.cpp
// Demonstrating fill, fill_n, generate, and generate_n
// Standard Library methods. 
#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <vector>

char nextLetter();

int main()
{
   std::vector< char > chars( 10 );
   std::ostream_iterator< char > output( cout, " " );

   std::fill( chars.begin(), chars.end(), '5' );
   cout << "Vector chars after filling with 5s:\n";
   std::copy( chars.begin(), chars.end(), output );

   std::fill_n( chars.begin(), 5, 'A' );
   cout << "\nVector chars after filling five elements"
        << " with As:\n";
   std::copy( chars.begin(), chars.end(), output );

   std::generate( chars.begin(), chars.end(), nextLetter );
   cout << "\nVector chars after generating letters A-J:\n";
   std::copy( chars.begin(), chars.end(), output );

   std::generate_n( chars.begin(), 5, nextLetter );
   cout << "\nVector chars after generating K-O for the"
        << " first five elements:\n";
   std::copy( chars.begin(), chars.end(), output );

   cout << endl;
   return 0;
}

char nextLetter()
{
   static char letter = 'A';
   return letter++;
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
