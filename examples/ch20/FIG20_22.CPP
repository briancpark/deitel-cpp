// Fig. 20.22: fig20_22.cpp
// Testing Standard Library class map
#include <iostream>

using std::cout;
using std::endl;

#include <map>

int main()
{
   typedef std::map< int, double, std::less< int > > mid;
   mid pairs;

   pairs.insert( mid::value_type( 15, 2.7 ) );
   pairs.insert( mid::value_type( 30, 111.11 ) );
   pairs.insert( mid::value_type( 5, 1010.1 ) );
   pairs.insert( mid::value_type( 10, 22.22 ) );
   pairs.insert( mid::value_type( 25, 33.333 ) );
   pairs.insert( mid::value_type( 5, 77.54 ) ); // dupe ignored
   pairs.insert( mid::value_type( 20, 9.345 ) );
   pairs.insert( mid::value_type( 15, 99.3 ) ); // dupe ignored
   cout << "pairs contains:\nKey\tValue\n";
   
   mid::const_iterator iter;

   for ( iter = pairs.begin(); iter != pairs.end(); ++iter )
      cout << iter->first << '\t' 
           << iter->second << '\n';

   pairs[ 25 ] = 9999.99;  // change existing value for 25
   pairs[ 40 ] = 8765.43;  // insert new value for 40
   cout << "\nAfter subscript operations, pairs contains:"
        << "\nKey\tValue\n";
   
   for ( iter = pairs.begin(); iter != pairs.end(); ++iter )
      cout << iter->first << '\t' 
           << iter->second << '\n';

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
