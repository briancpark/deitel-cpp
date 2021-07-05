// Fig. 20.17: fig20_17.cpp
// Testing Standard Library class list
#include <iostream>

using std::cout;
using std::endl;

#include <list>
#include <algorithm>

template < class T >
void printList( const std::list< T > &listRef );

int main()
{ 
   const int SIZE = 4;
   int a[ SIZE ] = { 2, 6, 4, 8 };
   std::list< int > values, otherValues;

   values.push_front( 1 );
   values.push_front( 2 );
   values.push_back( 4 );
   values.push_back( 3 );
   
   cout << "values contains: ";
   printList( values );
   values.sort();
   cout << "\nvalues after sorting contains: ";
   printList( values );
  
   otherValues.insert( otherValues.begin(), a, a + SIZE );
   cout << "\notherValues contains: ";
   printList( otherValues );
   values.splice( values.end(), otherValues );
   cout << "\nAfter splice values contains: ";
   printList( values );

   values.sort();
   cout << "\nvalues contains: ";
   printList( values );
   otherValues.insert( otherValues.begin(), a, a + SIZE );
   otherValues.sort();
   cout << "\notherValues contains: ";
   printList( otherValues );
   values.merge( otherValues );
   cout << "\nAfter merge:\n   values contains: ";
   printList( values );
   cout << "\n   otherValues contains: ";
   printList( otherValues );

   values.pop_front();
   values.pop_back();   // all sequence containers
   cout << "\nAfter pop_front and pop_back values contains:\n";
   printList( values );
   
   values.unique();
   cout << "\nAfter unique values contains: ";
   printList( values );

   // method swap is available in all containers
   values.swap( otherValues );
   cout << "\nAfter swap:\n   values contains: ";
   printList( values );
   cout << "\n   otherValues contains: ";
   printList( otherValues );

   values.assign( otherValues.begin(), otherValues.end() );
   cout << "\nAfter assign values contains: ";
   printList( values );

   values.merge( otherValues ); 
   cout << "\nvalues contains: ";
   printList( values ); 
   values.remove( 4 );
   cout << "\nAfter remove( 4 ) values contains: ";
   printList( values );
   cout << endl;
   return 0;
}

template < class T >
void printList( const std::list< T > &listRef )
{
   if ( listRef.empty() )
      cout << "List is empty";
   else {
      std::ostream_iterator< T > output( cout, " " );
      std::copy( listRef.begin(), listRef.end(), output );
   }
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
