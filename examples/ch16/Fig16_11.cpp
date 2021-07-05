// Fig. 16.11: fig16_11.cpp
// Using the bitwise shift operators 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

void displayBits( unsigned );

int main()
{
   unsigned number1 = 960;

   cout << "The result of left shifting\n";
   displayBits( number1 );
   cout << "8 bit positions using the left "
        << "shift operator is\n";
   displayBits( number1 << 8 );
   cout << "\nThe result of right shifting\n";
   displayBits( number1 );
   cout << "8 bit positions using the right "
        << "shift operator is\n";
   displayBits( number1 >> 8 );
   return 0;
}

void displayBits( unsigned value )
{
   const int SHIFT = 8 * sizeof( unsigned ) - 1;
   const unsigned MASK = 1 << SHIFT;

   cout << setw( 7 ) << value << " = ";

   for ( unsigned c = 1; c <= SHIFT + 1; c++ ) {
      cout << ( value & MASK ? '1' : '0' );
      value <<= 1;

      if ( c % 8 == 0 ) 
         cout << ' ';
   }

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
