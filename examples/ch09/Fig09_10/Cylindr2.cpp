// Fig. 9.10: cylindr2.cpp
// Member and friend function definitions 
// for class Cylinder.
#include "cylindr2.h"

// Cylinder constructor calls Circle constructor
Cylinder::Cylinder( double h, double r, int x, int y )
   : Circle( r, x, y )   // call base-class constructor
{ setHeight( h ); }

// Set height of Cylinder
void Cylinder::setHeight( double h ) 
   { height = ( h >= 0 ? h : 0 ); }

// Get height of Cylinder
double Cylinder::getHeight() const { return height; }

// Calculate area of Cylinder (i.e., surface area)
double Cylinder::area() const
{
   return 2 * Circle::area() +
          2 * 3.14159 * radius * height;
}

// Calculate volume of Cylinder
double Cylinder::volume() const
   { return Circle::area() * height; }

// Output Cylinder dimensions
ostream &operator<<( ostream &output, const Cylinder &c )
{
   output << static_cast< Circle >( c )
          << "; Height = " << c.height;

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
