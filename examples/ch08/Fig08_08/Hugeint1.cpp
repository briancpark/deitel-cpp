// Fig. 8.8: hugeint1.cpp 
// Member and friend function definitions for class HugeInt
#include <cstring>
#include "hugeint1.h"

// Conversion constructor
HugeInt::HugeInt( long val )
{
   int i; 

   for ( i = 0; i <= 29; i++ )
      integer[ i ] = 0;   // initialize array to zero

   for ( i = 29; val != 0 && i >= 0; i-- ) {
      integer[ i ] = val % 10;
      val /= 10;
   }
}

HugeInt::HugeInt( const char *string )
{
   int i, j;

   for ( i = 0; i <= 29; i++ )
      integer[ i ] = 0;

   for ( i = 30 - strlen( string ), j = 0; i <= 29; i++, j++ )
      if ( isdigit( string[ j ] ) )
         integer[ i ] = string[ j ] - '0';
}

// Addition
HugeInt HugeInt::operator+( const HugeInt &op2 )
{
   HugeInt temp;
   int carry = 0;

   for ( int i = 29; i >= 0; i-- ) {
      temp.integer[ i ] = integer[ i ] + 
                          op2.integer[ i ] + carry;

      if ( temp.integer[ i ] > 9 ) {
         temp.integer[ i ] %= 10;
         carry = 1;
      }
      else
         carry = 0;
   }

   return temp;
}

// Addition
HugeInt HugeInt::operator+( int op2 )
   { return *this + HugeInt( op2 ); }

// Addition
HugeInt HugeInt::operator+( const char *op2 )
   { return *this + HugeInt( op2 ); }

ostream& operator<<( ostream &output, const HugeInt &num )
{
   int i;

   for ( i = 0; ( num.integer[ i ] == 0 ) && ( i <= 29 ); i++ )
      ; // skip leading zeros

   if ( i == 30 )
      output << 0;
   else
      for ( ; i <= 29; i++ )
         output << num.integer[ i ];

   return output;
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
