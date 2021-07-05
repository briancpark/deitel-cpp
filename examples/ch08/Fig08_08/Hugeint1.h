// Fig. 8.8: hugeint1.h 
// Definition for class HugeInt
#ifndef HUGEINT1_H
#define HUGEINT1_H

#include <iostream>

using std::ostream;

class HugeInt {
   friend ostream &operator<<( ostream &, const HugeInt & );
public:
   HugeInt( long = 0 );       // conversion/default constructor
   HugeInt( const char * );           // conversion constructor
   HugeInt operator+( const HugeInt & ); // add another HugeInt
   HugeInt operator+( int );          // add an int
   HugeInt operator+( const char * ); // add an int in a char *
private:
   short integer[ 30 ];
};

#endif



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
