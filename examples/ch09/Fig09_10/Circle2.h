// Fig. 9.9: circle2.h
// Definition of class Circle
#ifndef CIRCLE2_H
#define CIRCLE2_H

#include <iostream>

using std::ostream;

#include "point2.h"

class Circle : public Point {
   friend ostream &operator<<( ostream &, const Circle & );
public:
   // default constructor
   Circle( double r = 0.0, int x = 0, int y = 0 );
   void setRadius( double );    // set radius
   double getRadius() const;    // return radius
   double area() const;         // calculate area
protected:          // accessible to derived classes
   double radius;   // radius of the Circle
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
