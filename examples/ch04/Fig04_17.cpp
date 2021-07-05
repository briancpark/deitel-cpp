// Fig. 4.17: fig04_17.cpp
// This program introduces the topic of survey data analysis.
// It computes the mean, median, and mode of the data.
#include <iostream>

using std::cout;
using std::endl;
using std::ios;

#include <iomanip>

using std::setw;
using std::setiosflags;
using std::setprecision;

void mean( const int [], int );
void median( int [], int );
void mode( int [], int [], int );
void bubbleSort( int[], int );
void printArray( const int[], int );

int main()
{
   const int responseSize = 99;
   int frequency[ 10 ] = { 0 },
       response[ responseSize ] = 
          { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
            7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
            6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
            7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
            6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
            7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
            5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
            7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
            7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
            4, 5, 6, 1, 6, 5, 7, 8, 7 };

   mean( response, responseSize );
   median( response, responseSize );
   mode( frequency, response, responseSize );

   return 0;
}

void mean( const int answer[], int arraySize )
{
   int total = 0;

   cout << "********\n  Mean\n********\n";

   for ( int j = 0; j < arraySize; j++ )
      total += answer[ j ];

   cout << "The mean is the average value of the data\n"
        << "items. The mean is equal to the total of\n"
        << "all the data items divided by the number\n"
        << "of data items (" << arraySize 
        << "). The mean value for\nthis run is: " 
        << total << " / " << arraySize << " = "
        << setiosflags( ios::fixed | ios::showpoint )
        << setprecision( 4 )
        << static_cast< double >( total ) / arraySize << "\n\n";
}

void median( int answer[], int size )
{
   cout << "\n********\n Median\n********\n"
        << "The unsorted array of responses is";

   printArray( answer, size );
   bubbleSort( answer, size );
   cout << "\n\nThe sorted array is";
   printArray( answer, size );
   cout << "\n\nThe median is element " << size / 2
        << " of\nthe sorted " << size 
        << " element array.\nFor this run the median is "
        << answer[ size / 2 ] << "\n\n";
}

void mode( int freq[], int answer[], int size )
{
   int rating, largest = 0, modeValue = 0;

   cout << "\n********\n  Mode\n********\n";

   for ( rating = 1; rating <= 9; rating++ )
      freq[ rating ] = 0;

   for ( int j = 0; j < size; j++ )
      ++freq[ answer[ j ] ];

   cout << "Response"<< setw( 11 ) << "Frequency"
        << setw( 19 ) << "Histogram\n\n" << setw( 55 )
        << "1    1    2    2\n" << setw( 56 )
        << "5    0    5    0    5\n\n";

   for ( rating = 1; rating <= 9; rating++ ) {
      cout << setw( 8 ) << rating << setw( 11 )
           << freq[ rating ] << "          ";

      if ( freq[ rating ] > largest ) {
         largest = freq[ rating ];
         modeValue = rating;
      }

      for ( int h = 1; h <= freq[ rating ]; h++ )
         cout << '*';

      cout << '\n';
   }

   cout << "The mode is the most frequent value.\n"
        << "For this run the mode is " << modeValue
        << " which occurred " << largest << " times." << endl;
}

void bubbleSort( int a[], int size )
{
   int hold;

   for ( int pass = 1; pass < size; pass++ )

      for ( int j = 0; j < size - 1; j++ )

         if ( a[ j ] > a[ j + 1 ] ) {
            hold = a[ j ];
            a[ j ] = a[ j + 1 ];
            a[ j + 1 ] = hold;
         }
}

void printArray( const int a[], int size )
{
   for ( int j = 0; j < size; j++ ) {

      if ( j % 20 == 0 )
         cout << endl;

      cout << setw( 2 ) << a[ j ];
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
