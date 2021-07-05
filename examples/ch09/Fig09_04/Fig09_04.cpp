// Fig. 9.4: fig09_04.cpp
// Casting base-class pointers to derived-class pointers
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

#include "point.h"
#include "circle.h"

int main()
{
   Point *pointPtr = 0, p( 30, 50 );
   Circle *circlePtr = 0, c( 2.7, 120, 89 );

   cout << "Point p: " << p << "\nCircle c: " << c << '\n';

   // Treat a Circle as a Point (see only the base class part)
   pointPtr = &c;   // assign address of Circle to pointPtr
   cout << "\nCircle c (via *pointPtr): " 
        << *pointPtr << '\n';

   // Treat a Circle as a Circle (with some casting)
   // cast base-class pointer to derived-class pointer
   circlePtr = static_cast< Circle * >( pointPtr );  
   cout << "\nCircle c (via *circlePtr):\n" << *circlePtr 
        << "\nArea of c (via circlePtr): "
        << circlePtr->area() << '\n';

   // DANGEROUS: Treat a Point as a Circle
   pointPtr = &p;   // assign address of Point to pointPtr
   
   // cast base-class pointer to derived-class pointer
   circlePtr = static_cast< Circle * >( pointPtr );
   cout << "\nPoint p (via *circlePtr):\n" << *circlePtr
        << "\nArea of object circlePtr points to: "
        << circlePtr->area() << endl;
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
