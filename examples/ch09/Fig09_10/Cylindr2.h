// Fig. 9.10: cylindr2.h
// Definition of class Cylinder
#ifndef CYLINDR2_H
#define CYLINDR2_H

#include <iostream>

using std::ostream;

#include "circle2.h"

class Cylinder : public Circle {
   friend ostream &operator<<( ostream &, const Cylinder & );

public:
   // default constructor
   Cylinder( double h = 0.0, double r = 0.0,
             int x = 0, int y = 0 );

   void setHeight( double );   // set height
   double getHeight() const;   // return height
   double area() const;        // calculate and return area
   double volume() const;      // calculate and return volume

protected:
   double height;              // height of the Cylinder
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
