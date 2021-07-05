// Fig. 10.2: point1.h
// Definition of class Point
#ifndef POINT1_H
#define POINT1_H

#include <iostream>

using std::cout;

#include "shape.h"

class Point : public Shape {
public:
   Point( int = 0, int = 0 );  // default constructor
   void setPoint( int, int );
   int getX() const { return x; }
   int getY() const { return y; }
   virtual void printShapeName() const { cout << "Point: "; }
   virtual void print() const;
private:
   int x, y;   // x and y coordinates of Point
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
