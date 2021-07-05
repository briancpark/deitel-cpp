// Fig. 20.36: fig20_36.cpp
// Demonstrates lower_bound, upper_bound and equal_range for
// a sorted sequence of values.
#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <vector>

int main()
{
   const int SIZE = 10;
   int a1[] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
   std::vector< int > v( a1, a1 + SIZE );
   std::ostream_iterator< int > output( cout, " " );

   cout << "Vector v contains:\n";
   std::copy( v.begin(), v.end(), output );

   std::vector< int >::iterator lower;
   lower = std::lower_bound( v.begin(), v.end(), 6 );
   cout << "\n\nLower bound of 6 is element " 
        << ( lower - v.begin() ) << " of vector v";

   std::vector< int >::iterator upper;
   upper = std::upper_bound( v.begin(), v.end(), 6 );
   cout << "\nUpper bound of 6 is element " 
        << ( upper - v.begin() ) << " of vector v";

   std::pair< std::vector< int >::iterator, 
              std::vector< int >::iterator > eq;
   eq = std::equal_range( v.begin(), v.end(), 6 );
   cout << "\nUsing equal_range:\n"
        << "   Lower bound of 6 is element "
        << ( eq.first - v.begin() ) << " of vector v";
   cout << "\n   Upper bound of 6 is element "
        << ( eq.second - v.begin() ) << " of vector v";

   cout << "\n\nUse lower_bound to locate the first point\n"
        << "at which 5 can be inserted in order";
   lower = std::lower_bound( v.begin(), v.end(), 5 );
   cout << "\n   Lower bound of 5 is element " 
        << ( lower - v.begin() ) << " of vector v";

   cout << "\n\nUse upper_bound to locate the last point\n"
        << "at which 7 can be inserted in order";
   upper = std::upper_bound( v.begin(), v.end(), 7 );
   cout << "\n   Upper bound of 7 is element " 
        << ( upper - v.begin() ) << " of vector v";

   cout << "\n\nUse equal_range to locate the first and\n"
        << "last point at which 5 can be inserted in order";
   eq = std::equal_range( v.begin(), v.end(), 5 );
   cout << "\n   Lower bound of 5 is element "
        << ( eq.first - v.begin() ) << " of vector v";
   cout << "\n   Upper bound of 5 is element "
        << ( eq.second - v.begin() ) << " of vector v" 
        << endl;            
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
