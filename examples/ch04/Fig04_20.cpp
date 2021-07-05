// Fig. 4.20: fig04_20.cpp
// Binary search of an array
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

int binarySearch( const int [], int, int, int, int );
void printHeader( int );
void printRow( const int [], int, int, int, int );

int main()
{
   const int arraySize = 15;
   int a[ arraySize ], key, result;

   for ( int i = 0; i < arraySize; i++ )
      a[ i ] = 2 * i;   // place some data in array

   cout << "Enter a number between 0 and 28: ";
   cin >> key;

   printHeader( arraySize );
   result = binarySearch( a, key, 0, arraySize - 1, arraySize );

   if ( result != -1 )
      cout << '\n' << key << " found in array element "
           << result << endl;
   else
      cout << '\n' << key << " not found" << endl;

   return 0;
}

// Binary search
int binarySearch( const int b[], int searchKey, int low, int high, 
                  int size )
{
   int middle;

   while ( low <= high ) {
      middle = ( low + high ) / 2;

      printRow( b, low, middle, high, size );

      if ( searchKey == b[ middle ] )  // match
         return middle;
      else if ( searchKey < b[ middle ] )
         high = middle - 1;        // search low end of array
      else
         low = middle + 1;         // search high end of array
   }

   return -1;   // searchKey not found
}

// Print a header for the output
void printHeader( int size )
{
   int i;

   cout << "\nSubscripts:\n";

   for ( i = 0; i < size; i++ )
      cout << setw( 3 ) << i << ' ';

   cout << '\n';

   for ( i = 1; i <= 4 * size; i++ )
      cout << '-';

   cout << endl;
}

// Print one row of output showing the current
// part of the array being processed.
void printRow( const int b[], int low, int mid, int high, int size )
{
   for ( int i = 0; i < size; i++ )
      if ( i < low || i > high )
         cout << "    ";
      else if ( i == mid )           // mark middle value
         cout << setw( 3 ) << b[ i ] << '*';  
      else
         cout << setw( 3 ) << b[ i ] << ' ';

   cout << endl;
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
