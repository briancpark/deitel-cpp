// Fig. 20.31: fig20_31.cpp
// Demonstrates search and sort capabilities.
#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <vector>

bool greater10( int value );

int main()
{
   const int SIZE = 10;
   int a[ SIZE ] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
   std::vector< int > v( a, a + SIZE );
   std::ostream_iterator< int > output( cout, " " );

   cout << "Vector v contains: ";
   std::copy( v.begin(), v.end(), output );
   
   std::vector< int >::iterator location;
   location = std::find( v.begin(), v.end(), 16 );

   if ( location != v.end() ) 
      cout << "\n\nFound 16 at location " 
           << ( location - v.begin() );
   else 
      cout << "\n\n16 not found";
   
   location = std::find( v.begin(), v.end(), 100 );

   if ( location != v.end() ) 
      cout << "\nFound 100 at location " 
           << ( location - v.begin() );
   else 
      cout << "\n100 not found";

   location = std::find_if( v.begin(), v.end(), greater10 );

   if ( location != v.end() ) 
      cout << "\n\nThe first value greater than 10 is "
           << *location << "\nfound at location " 
           << ( location - v.begin() );
   else 
      cout << "\n\nNo values greater than 10 were found";

   std::sort( v.begin(), v.end() );
   cout << "\n\nVector v after sort: ";
   std::copy( v.begin(), v.end(), output );

   if ( std::binary_search( v.begin(), v.end(), 13 ) )
      cout << "\n\n13 was found in v";
   else
      cout << "\n\n13 was not found in v";

   if ( std::binary_search( v.begin(), v.end(), 100 ) )
      cout << "\n100 was found in v";
   else
      cout << "\n100 was not found in v";

   cout << endl;
   return 0;
}

bool greater10( int value ) { return value > 10; }


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
