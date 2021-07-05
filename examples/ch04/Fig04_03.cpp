// Fig. 4.3: fig04_03.cpp
// initializing an array
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
   int i, n[ 10 ];

   for ( i = 0; i < 10; i++ )        // initialize array
      n[ i ] = 0;

   cout << "Element" << setw( 13 ) << "Value" << endl;

   for ( i = 0; i < 10; i++ )        // print array
      cout << setw( 7 ) << i << setw( 13 ) << n[ i ] << endl;

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
