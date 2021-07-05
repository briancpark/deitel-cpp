// Fig. 20.15: fig20_15.cpp
// Testing Standard Library vector class template 
// element-manipulation functions
#include <iostream>

using std::cout;
using std::endl;

#include <vector>
#include <algorithm>

int main()
{
   const int SIZE = 6;   
   int a[ SIZE ] = { 1, 2, 3, 4, 5, 6 };
   std::vector< int > v( a, a + SIZE );
   std::ostream_iterator< int > output( cout, " " );
   cout << "Vector v contains: ";
   std::copy( v.begin(), v.end(), output );

   cout << "\nFirst element of v: " << v.front()
        << "\nLast element of v: " << v.back();

   v[ 0 ] = 7;        // set first element to 7
   v.at( 2 ) = 10;    // set element at position 2 to 10
   v.insert( v.begin() + 1, 22 );  // insert 22 as 2nd element
   cout << "\nContents of vector v after changes: ";
   std::copy( v.begin(), v.end(), output );

   try {
      v.at( 100 ) = 777;   // access element out of range
   }
   catch ( std::out_of_range e ) {
      cout << "\nException: " << e.what();
   }

   v.erase( v.begin() );
   cout << "\nContents of vector v after erase: ";
   std::copy( v.begin(), v.end(), output );
   v.erase( v.begin(), v.end() );
   cout << "\nAfter erase, vector v " 
        << ( v.empty() ? "is" : "is not" ) << " empty";

   v.insert( v.begin(), a, a + SIZE );
   cout << "\nContents of vector v before clear: ";
   std::copy( v.begin(), v.end(), output );
   v.clear();  // clear calls erase to empty a collection
   cout << "\nAfter clear, vector v " 
        << ( v.empty() ? "is" : "is not" ) << " empty";

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
