// Fig. 10.1: boss1.cpp
// Member function definitions for class Boss
#include <iostream>

using std::cout;

#include "boss1.h"

// Constructor function for class Boss
Boss::Boss( const char *first, const char *last, double s )
   : Employee( first, last )  // call base-class constructor
{ setWeeklySalary( s ); }

// Set the Boss's salary
void Boss::setWeeklySalary( double s )
   { weeklySalary = s > 0 ? s : 0; }

// Get the Boss's pay
double Boss::earnings() const { return weeklySalary; }

// Print the Boss's name 
void Boss::print() const
{
   cout << "\n             Boss: ";
   Employee::print();
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
