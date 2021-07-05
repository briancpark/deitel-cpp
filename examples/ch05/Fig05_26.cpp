// Fig. 5.26: fig05_26.cpp
// Multipurpose sorting program using function pointers
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

void bubble( int [], const int, bool (*)( int, int ) );
bool ascending( int, int );
bool descending( int, int );

int main()
{
   const int arraySize = 10;
   int order, 
       counter,
       a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   cout << "Enter 1 to sort in ascending order,\n" 
        << "Enter 2 to sort in descending order: ";
   cin >> order;
   cout << "\nData items in original order\n";
   
   for ( counter = 0; counter < arraySize; counter++ )
      cout << setw( 4 ) << a[ counter ];

   if ( order == 1 ) {
      bubble( a, arraySize, ascending );
      cout << "\nData items in ascending order\n";
   }
   else {
      bubble( a, arraySize, descending );
      cout << "\nData items in descending order\n";
   }

   for ( counter = 0; counter < arraySize; counter++ )
      cout << setw( 4 ) << a[ counter ];

   cout << endl;
   return 0;
}

void bubble( int work[], const int size, 
             bool (*compare)( int, int ) )
{
   void swap( int * const, int * const );   // prototype

   for ( int pass = 1; pass < size; pass++ )

      for ( int count = 0; count < size - 1; count++ )

         if ( (*compare)( work[ count ], work[ count + 1 ] ) )
            swap( &work[ count ], &work[ count + 1 ] );
}

void swap( int * const element1Ptr, int * const element2Ptr )
{
   int temp;

   temp = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = temp;
}

bool ascending( int a, int b )
{
   return b < a;   // swap if b is less than a
}

bool descending( int a, int b )
{
   return b > a;   // swap if b is greater than a
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
