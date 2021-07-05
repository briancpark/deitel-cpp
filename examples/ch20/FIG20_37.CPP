// Fig. 20.37: fig20_37.cpp
// Demonstrating push_heap, pop_heap, make_heap and sort_heap.
#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <vector>

int main()
{
   const int SIZE = 10;
   int a[ SIZE ] = { 3, 100, 52, 77, 22, 31, 1, 98, 13, 40 };
   int i;
   std::vector< int > v( a, a + SIZE ), v2;
   std::ostream_iterator< int > output( cout, " " );

   cout << "Vector v before make_heap:\n";
   std::copy( v.begin(), v.end(), output );
   std::make_heap( v.begin(), v.end() );
   cout << "\nVector v after make_heap:\n";
   std::copy( v.begin(), v.end(), output );
   std::sort_heap( v.begin(), v.end() );
   cout << "\nVector v after sort_heap:\n";
   std::copy( v.begin(), v.end(), output );

   // perform the heapsort with push_heap and pop_heap
   cout << "\n\nArray a contains: ";
   std::copy( a, a + SIZE, output );

   for ( i = 0; i < SIZE; ++i ) {
      v2.push_back( a[ i ] );
      std::push_heap( v2.begin(), v2.end() );      
      cout << "\nv2 after push_heap(a[" << i << "]): ";
      std::copy( v2.begin(), v2.end(), output );
   }
   
   for ( i = 0; i < v2.size(); ++i ) {
      cout << "\nv2 after " << v2[ 0 ] << " popped from heap\n";
      std::pop_heap( v2.begin(), v2.end() - i );
      std::copy( v2.begin(), v2.end(), output );
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
