// Fig. 4.16: fig04_16.cpp
// This program sorts an array's values into
// ascending order
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   int i, hold;

   cout << "Data items in original order\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];

   for ( int pass = 0; pass < arraySize - 1; pass++ ) // passes

      for ( i = 0; i < arraySize - 1; i++ )      // one pass

         if ( a[ i ] > a[ i + 1 ] ) {      // one comparison
            hold = a[ i ];                 // one swap
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
         }

   cout << "\nData items in ascending order\n";

   for ( i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];

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
