// Fig. 4.14: fig04_14.cpp
// Passing arrays and individual array elements to functions
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

void modifyArray( int [], int );  // appears strange
void modifyElement( int );

int main()
{
   const int arraySize = 5;
   int i, a[ arraySize ] = { 0, 1, 2, 3, 4 };

   cout << "Effects of passing entire array call-by-reference:" 
        << "\n\nThe values of the original array are:\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 3 ) << a[ i ];

   cout << endl;

   // array a passed call-by-reference
   modifyArray( a, arraySize );  

   cout << "The values of the modified array are:\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 3 ) << a[ i ];

   cout << "\n\n\n"
        << "Effects of passing array element call-by-value:"
        << "\n\nThe value of a[3] is " << a[ 3 ] << '\n';

   modifyElement( a[ 3 ] );

   cout << "The value of a[3] is " << a[ 3 ] << endl;

   return 0;
}

// In function modifyArray, "b" points to the original
// array "a" in memory.
void modifyArray( int b[], int sizeOfArray )
{
   for ( int j = 0; j < sizeOfArray; j++ )
      b[ j ] *= 2;
}

// In function modifyElement, "e" is a local copy of
// array element a[ 3 ] passed from main.
void modifyElement( int e )
{
   cout << "Value in modifyElement is " 
        << ( e *= 2 ) << endl;
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
