// Fig. 10.2: fig10_02.cpp
// Driver for shape, point, circle, cylinder hierarchy
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;
using std::setiosflags;
using std::setprecision;

#include "shape.h"
#include "point1.h"
#include "circle1.h"
#include "cylindr1.h"

void virtualViaPointer( const Shape * );
void virtualViaReference( const Shape & );

int main()
{
   cout << setiosflags( ios::fixed | ios::showpoint )
        << setprecision( 2 );

   Point point( 7, 11 );                  // create a Point
   Circle circle( 3.5, 22, 8 );           // create a Circle
   Cylinder cylinder( 10, 3.3, 10, 10 );  // create a Cylinder

   point.printShapeName();    // static binding
   point.print();             // static binding
   cout << '\n';

   circle.printShapeName();   // static binding
   circle.print();            // static binding
   cout << '\n';

   cylinder.printShapeName(); // static binding
   cylinder.print();          // static binding
   cout << "\n\n";

   Shape *arrayOfShapes[ 3 ];  // array of base-class pointers

   // aim arrayOfShapes[0] at derived-class Point object
   arrayOfShapes[ 0 ] = &point;

   // aim arrayOfShapes[1] at derived-class Circle object
   arrayOfShapes[ 1 ] = &circle;

   // aim arrayOfShapes[2] at derived-class Cylinder object
   arrayOfShapes[ 2 ] = &cylinder;

   // Loop through arrayOfShapes and call virtualViaPointer
   // to print the shape name, attributes, area, and volume 
   // of each object using dynamic binding.
   cout << "Virtual function calls made off "
        << "base-class pointers\n";

   for ( int i = 0; i < 3; i++ ) 
      virtualViaPointer( arrayOfShapes[ i ] );

   // Loop through arrayOfShapes and call virtualViaReference
   // to print the shape name, attributes, area, and volume 
   // of each object using dynamic binding.
   cout << "Virtual function calls made off "
        << "base-class references\n";

   for ( int j = 0; j < 3; j++ ) 
      virtualViaReference( *arrayOfShapes[ j ] );

   return 0;
}

// Make virtual function calls off a base-class pointer
// using dynamic binding.
void virtualViaPointer( const Shape *baseClassPtr )
{
   baseClassPtr->printShapeName();
   baseClassPtr->print();
   cout << "\nArea = " << baseClassPtr->area()
        << "\nVolume = " << baseClassPtr->volume() << "\n\n";
}

// Make virtual function calls off a base-class reference
// using dynamic binding.
void virtualViaReference( const Shape &baseClassRef )
{
   baseClassRef.printShapeName();
   baseClassRef.print();
   cout << "\nArea = " << baseClassRef.area()
        << "\nVolume = " << baseClassRef.volume() << "\n\n";
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
