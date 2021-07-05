// Fig. 5.15: fig05_15.cpp
// This program puts values into an array, sorts the values into
// ascending order, and prints the resulting array.
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

void bubbleSort( int *, const int );

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   int i;

   cout << "Data items in original order\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];

   bubbleSort( a, arraySize );          // sort the array
   cout << "\nData items in ascending order\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];

   cout << endl;
   return 0;
}

void bubbleSort( int *array, const int size )
{
   void swap( int * const, int * const );

   for ( int pass = 0; pass < size - 1; pass++ )

      for ( int j = 0; j < size - 1; j++ )

         if ( array[ j ] > array[ j + 1 ] )
            swap( &array[ j ], &array[ j + 1 ] );
}

void swap( int * const element1Ptr, int * const element2Ptr )
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
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
