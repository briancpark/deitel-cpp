// Fig. 2.21: fig02_21.cpp
// Calculating compound interest
#include <iostream>

using std::cout;
using std::endl;
using std::ios;

#include <iomanip>

using std::setw;
using std::setiosflags;
using std::setprecision;

#include <cmath>

int main()
{
   double amount,              // amount on deposit
          principal = 1000.0,  // starting principal
          rate = .05;          // interest rate

   cout << "Year" << setw( 21 ) 
        << "Amount on deposit" << endl;

   // set the floating-point number format
   cout << setiosflags( ios::fixed | ios::showpoint )
        << setprecision( 2 );

   for ( int year = 1; year <= 10; year++ ) {
      amount = principal * pow( 1.0 + rate, year );
      cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
   }

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
