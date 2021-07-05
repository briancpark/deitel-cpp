// Fig. 9.11: derived.cpp
// Member function definitions for class Derived
#include "derived.h"

// Constructor for Derived calls constructors for
// class Base1 and class Base2.
// Use member initializers to call base-class constructors
Derived::Derived( int i, char c, double f )
   : Base1( i ), Base2( c ), real ( f ) { } 

// Return the value of real
double Derived::getReal() const { return real; }

// Display all the data members of Derived
ostream &operator<<( ostream &output, const Derived &d )
{
   output << "    Integer: " << d.value 
          << "\n  Character: " << d.letter
          << "\nReal number: " << d.real;

   return output;   // enables cascaded calls
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
