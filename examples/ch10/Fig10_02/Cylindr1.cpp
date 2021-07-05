// Fig. 10.2: cylindr1.cpp
// Member and friend function definitions for class Cylinder
#include <iostream>

using std::cout;

#include "cylindr1.h"

Cylinder::Cylinder( double h, double r, int x, int y )
   : Circle( r, x, y )  // call base-class constructor
{ setHeight( h ); }

void Cylinder::setHeight( double h )
   { height = h > 0 ? h : 0; }

double Cylinder::getHeight() { return height; }

double Cylinder::area() const
{
   // surface area of Cylinder
   return 2 * Circle::area() +
          2 * 3.14159 * getRadius() * height;
}

double Cylinder::volume() const 
   { return Circle::area() * height; }

void Cylinder::print() const
{
   Circle::print();
   cout << "; Height = " << height;
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
