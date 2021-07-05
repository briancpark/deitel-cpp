// Fig. 21.11: array3.cpp
// Member function definitions for class Array
#include <iostream>

using std::cout;
using std::ostream;

#include <cassert>
#include "array3.h"

// Default constructor for class Array (default size 10)
Array::Array( int arraySize )
{
   size = ( arraySize > 0 ? arraySize : 10 ); 
   cout << "Array constructor called for " 
        << size << " elements\n";

   ptr = new int[ size ]; // create space for array
   assert( ptr != 0 );    // terminate if memory not allocated

   for ( int i = 0; i < size; i++ )
      ptr[ i ] = 0;          // initialize array
}

// Destructor for class Array
Array::~Array() { delete [] ptr; }

// Overloaded output operator for class Array 
ostream &operator<<( ostream &output, const Array &a )
{
   int i;

   for ( i = 0; i < a.size; i++ )
      output << a.ptr[ i ] << ' ' ;

   return output;   // enables cout << x << y;
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
