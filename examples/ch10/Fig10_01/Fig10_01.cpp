// Fig. 10.1: fig10_01.cpp
// Driver for Employee hierarchy
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;
using std::setiosflags;
using std::setprecision;

#include "employ2.h"
#include "boss1.h"
#include "commis1.h"
#include "piece1.h"
#include "hourly1.h"

void virtualViaPointer( const Employee * );
void virtualViaReference( const Employee & );

int main()
{
   // set output formatting
   cout << setiosflags( ios::fixed | ios::showpoint ) 
        << setprecision( 2 );

   Boss b( "John", "Smith", 800.00 );
   b.print();                              // static binding
   cout << " earned $" << b.earnings();    // static binding
   virtualViaPointer( &b );          // uses dynamic binding
   virtualViaReference( b );         // uses dynamic binding

   CommissionWorker c( "Sue", "Jones", 200.0, 3.0, 150 );
   c.print();                              // static binding
   cout << " earned $" << c.earnings();    // static binding
   virtualViaPointer( &c );          // uses dynamic binding
   virtualViaReference( c );         // uses dynamic binding

   PieceWorker p( "Bob", "Lewis", 2.5, 200 );
   p.print();                              // static binding
   cout << " earned $" << p.earnings();    // static binding
   virtualViaPointer( &p );          // uses dynamic binding
   virtualViaReference( p );         // uses dynamic binding

   HourlyWorker h( "Karen", "Price", 13.75, 40 );
   h.print();                              // static binding
   cout << " earned $" << h.earnings();    // static binding
   virtualViaPointer( &h );          // uses dynamic binding
   virtualViaReference( h );         // uses dynamic binding
   cout << endl;
   return 0;
}

// Make virtual function calls off a base-class pointer
// using dynamic binding.
void virtualViaPointer( const Employee *baseClassPtr )
{
   baseClassPtr->print();
   cout << " earned $" << baseClassPtr->earnings();
}

// Make virtual function calls off a base-class reference
// using dynamic binding.
void virtualViaReference( const Employee &baseClassRef )
{
   baseClassRef.print();
   cout << " earned $" << baseClassRef.earnings();
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
