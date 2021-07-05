// Fig. 3.19: fig03_19.cpp
// Using an inline function to calculate
// the volume of a cube.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline double cube( const double s ) { return s * s * s; }

int main()
{
   cout << "Enter the side length of your cube:  ";

   double side;

   cin >> side;
   cout << "Volume of cube with side " 
        << side << " is " << cube( side ) << endl;

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
