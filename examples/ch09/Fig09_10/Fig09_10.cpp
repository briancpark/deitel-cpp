// Fig. 9.10: fig09_10.cpp
// Driver for class Cylinder
#include <iostream>

using std::cout;
using std::endl;

#include "point2.h"
#include "circle2.h"
#include "cylindr2.h"

int main()
{
   // create Cylinder object
   Cylinder cyl( 5.7, 2.5, 12, 23 );

   // use get functions to display the Cylinder
   cout << "X coordinate is " << cyl.getX()
        << "\nY coordinate is " << cyl.getY()
        << "\nRadius is " << cyl.getRadius()
        << "\nHeight is " << cyl.getHeight() << "\n\n";

   // use set functions to change the Cylinder's attributes
   cyl.setHeight( 10 );
   cyl.setRadius( 4.25 );
   cyl.setPoint( 2, 2 );
   cout << "The new location, radius, and height of cyl are:\n"
        << cyl << '\n';

   cout << "The area of cyl is:\n"
        << cyl.area() << '\n';

   // display the Cylinder as a Point
   Point &pRef = cyl;   // pRef "thinks" it is a Point
   cout << "\nCylinder printed as a Point is: " 
        << pRef << "\n\n";
   
   // display the Cylinder as a Circle
   Circle &circleRef = cyl;  // circleRef thinks it is a Circle
   cout << "Cylinder printed as a Circle is:\n" << circleRef
        << "\nArea: " << circleRef.area() << endl;

   return 0;
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
