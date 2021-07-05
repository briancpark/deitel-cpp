// Fig. 20.19: fig20_19.cpp
// Testing Standard Library class multiset
#include <iostream>

using std::cout;
using std::endl;

#include <set>
#include <algorithm>

int main()
{
   const int SIZE = 10;
   int a[ SIZE ] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
   typedef std::multiset< int, std::less< int > > ims;
   ims intMultiset;    // ims for "integer multiset"
   std::ostream_iterator< int > output( cout, " " );

   cout << "There are currently " << intMultiset.count( 15 )
        << " values of 15 in the multiset\n";   
   intMultiset.insert( 15 );
   intMultiset.insert( 15 );
   cout << "After inserts, there are " 
        << intMultiset.count( 15 )
        << " values of 15 in the multiset\n";

   ims::const_iterator result;

   result = intMultiset.find( 15 );  // find returns iterator

   if ( result != intMultiset.end() ) // if iterator not at end
      cout << "Found value 15\n";     // found search value 15
   
   result = intMultiset.find( 20 );

   if ( result == intMultiset.end() )    // will be true hence
      cout << "Did not find value 20\n"; // did not find 20

   intMultiset.insert( a, a + SIZE ); // add array a to multiset
   cout << "After insert intMultiset contains:\n";
   std::copy( intMultiset.begin(), intMultiset.end(), output );

   cout << "\nLower bound of 22: " 
        << *( intMultiset.lower_bound( 22 ) );
   cout << "\nUpper bound of 22: " 
        << *( intMultiset.upper_bound( 22 ) );

   std::pair< ims::const_iterator, ims::const_iterator > p;

   p = intMultiset.equal_range( 22 );
   cout << "\nUsing equal_range of 22"
        << "\n   Lower bound: " << *( p.first )
        << "\n   Upper bound: " << *( p.second );
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
