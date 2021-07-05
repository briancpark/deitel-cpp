// Fig. 11.17: fig11_17.cpp 
// Controlling precision of floating-point values
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::ios;
using std::setiosflags;
using std::setprecision;

#include <cmath>

int main()
{
   double root2 = sqrt( 2.0 );
   int places;

   cout << setiosflags( ios::fixed)
        << "Square root of 2 with precisions 0-9.\n"
        << "Precision set by the "
        << "precision member function:" << endl;

   for ( places = 0; places <= 9; places++ ) {
      cout.precision( places );
      cout << root2 << '\n';
   }

   cout << "\nPrecision set by the "
        << "setprecision manipulator:\n";

   for ( places = 0; places <= 9; places++ )
      cout << setprecision( places ) << root2 << '\n';

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
