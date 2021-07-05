// Fig. 20.14: fig20_14.cpp
// Testing Standard Library vector class template
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <vector>

template < class T >
void printVector( const std::vector< T > &vec );

int main()
{
   const int SIZE = 6;   
   int a[ SIZE ] = { 1, 2, 3, 4, 5, 6 };
   std::vector< int > v;

   cout << "The initial size of v is: " << v.size()
        << "\nThe initial capacity of v is: " << v.capacity();
   v.push_back( 2 );  // method push_back() is in
   v.push_back( 3 );  // every sequence collection
   v.push_back( 4 );
   cout << "\nThe size of v is: " << v.size()
        << "\nThe capacity of v is: " << v.capacity();
   cout << "\n\nContents of array a using pointer notation: ";

   for ( int *ptr = a; ptr != a + SIZE; ++ptr )
      cout << *ptr << ' ';

   cout << "\nContents of vector v using iterator notation: ";
   printVector( v );

   cout << "\nReversed contents of vector v: ";

   std::vector< int >::reverse_iterator p2;

   for ( p2 = v.rbegin(); p2 != v.rend(); ++p2 )
      cout << *p2 << ' ';

   cout << endl;
   return 0;
}

template < class T >
void printVector( const std::vector< T > &vec )
{
   std::vector< T >::const_iterator p1;

   for ( p1 = vec.begin(); p1 != vec.end(); p1++ )
      cout << *p1 << ' ';
}


/*
   Demonstrates      
      Vector declaration
      passing vector to method via const reference
      push_back
      size
      capacity
      begin
      end
      rbegin
      rend
*/




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
