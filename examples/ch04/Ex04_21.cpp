// ex04_21.cpp
#include <iostream>

using std::cout;
using std::endl;

void someFunction( int [], int );

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] =
      32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

   cout << "The values in the array are:" << endl;
   someFunction( a, arraySize );
   cout << endl;
   return 0;
}

void someFunction( int b[], int size )
{
   if ( size > 0 ) {
      someFunction( &b[ 1 ], size - 1 );
      cout << b[ 0 ] << "  ";
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
