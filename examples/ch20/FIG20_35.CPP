// Fig. 20.35: fig20_35.cpp
// Demonstrates includes, set_difference, set_intersection, 
// set_symmetric_difference and set_union.
#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>

int main()
{
   const int SIZE1 = 10, SIZE2 = 5, SIZE3 = 20;
   int a1[ SIZE1 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int a2[ SIZE2 ] = { 4, 5, 6, 7, 8 };
   int a3[ SIZE2 ] = { 4, 5, 6, 11, 15 };
   std::ostream_iterator< int > output( cout, " " );

   cout << "a1 contains: ";
   std::copy( a1, a1 + SIZE1, output );
   cout << "\na2 contains: ";
   std::copy( a2, a2 + SIZE2, output );
   cout << "\na3 contains: ";
   std::copy( a3, a3 + SIZE2, output );

   if ( std::includes( a1, a1 + SIZE1, a2, a2 + SIZE2 ) )
      cout << "\na1 includes a2";
   else
      cout << "\na1 does not include a2";
      
   if ( std::includes( a1, a1 + SIZE1, a3, a3 + SIZE2 ) )
      cout << "\na1 includes a3";
   else
      cout << "\na1 does not include a3";

   int difference[ SIZE1 ];
   int *ptr = std::set_difference( a1, a1 + SIZE1, 
                 a2, a2 + SIZE2, difference );
   cout << "\nset_difference of a1 and a2 is: ";
   std::copy( difference, ptr, output );

   int intersection[ SIZE1 ];
   ptr = std::set_intersection( a1, a1 + SIZE1, 
            a2, a2 + SIZE2, intersection );
   cout << "\nset_intersection of a1 and a2 is: ";
   std::copy( intersection, ptr, output );

   int symmetric_difference[ SIZE1 ];
   ptr = std::set_symmetric_difference( a1, a1 + SIZE1, 
            a2, a2 + SIZE2, symmetric_difference );
   cout << "\nset_symmetric_difference of a1 and a2 is: ";
   std::copy( symmetric_difference, ptr, output );

   int unionSet[ SIZE3 ];
   ptr = std::set_union( a1, a1 + SIZE1, 
            a3, a3 + SIZE2, unionSet );
   cout << "\nset_union of a1 and a3 is: ";
   std::copy( unionSet, ptr, output );
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
