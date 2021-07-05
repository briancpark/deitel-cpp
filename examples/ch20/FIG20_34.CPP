// Fig. 20.34: fig20_34.cpp
// Demonstrates miscellaneous functions: inplace_merge,
// reverse_copy, and unique_copy.
#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
   const int SIZE = 10;
   int a1[ SIZE ] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
   std::vector< int > v1( a1, a1 + SIZE );

   std::ostream_iterator< int > output( cout, " " );

   cout << "Vector v1 contains: ";
   std::copy( v1.begin(), v1.end(), output );

   std::inplace_merge( v1.begin(), v1.begin() + 5, v1.end() );
   cout << "\nAfter inplace_merge, v1 contains: ";
   std::copy( v1.begin(), v1.end(), output );
   
   std::vector< int > results1;
   std::unique_copy( v1.begin(), v1.end(), 
                     std::back_inserter( results1 ) );
   cout << "\nAfter unique_copy results1 contains: ";
   std::copy( results1.begin(), results1.end(), output );
   
   std::vector< int > results2;
   cout << "\nAfter reverse_copy, results2 contains: ";
   std::reverse_copy( v1.begin(), v1.end(), 
                      std::back_inserter( results2 ) );
   std::copy( results2.begin(), results2.end(), output );

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
