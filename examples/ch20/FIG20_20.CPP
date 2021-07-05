// Fig. 20.20: fig20_20.cpp
// Testing Standard Library class set
#include <iostream>

using std::cout;
using std::endl;

#include <set>
#include <algorithm>

int main()
{
   typedef std::set< double, std::less< double > > double_set;
   const int SIZE = 5;
   double a[ SIZE ] = { 2.1, 4.2, 9.5, 2.1, 3.7 };   
   double_set doubleSet( a, a + SIZE );;
   std::ostream_iterator< double > output( cout, " " );

   cout << "doubleSet contains: ";
   std::copy( doubleSet.begin(), doubleSet.end(), output );

   std::pair< double_set::const_iterator, bool > p;

   p = doubleSet.insert( 13.8 ); // value not in set
   cout << '\n' << *( p.first ) 
        << ( p.second ? " was" : " was not" ) << " inserted";
   cout << "\ndoubleSet contains: ";
   std::copy( doubleSet.begin(), doubleSet.end(), output );

   p = doubleSet.insert( 9.5 );  // value already in set
   cout << '\n' << *( p.first ) 
        << ( p.second ? " was" : " was not" ) << " inserted";
   cout << "\ndoubleSet contains: ";
   std::copy( doubleSet.begin(), doubleSet.end(), output );

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
