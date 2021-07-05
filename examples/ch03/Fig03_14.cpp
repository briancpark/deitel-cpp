// Fig. 3.14: fig03_14.cpp
// Recursive factorial function
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

unsigned long factorial( unsigned long );

int main()
{
   for ( int i = 0; i <= 10; i++ )
      cout << setw( 2 ) << i << "! = " << factorial( i ) << endl;

   return 0;
}

// Recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
   if ( number <= 1 )  // base case
      return 1;
   else                // recursive case
      return number * factorial( number - 1 );
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
