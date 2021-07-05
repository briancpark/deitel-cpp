// clock.cpp
// Member function definitions for class Clock.
#include <iostream>

using std::cout;
using std::endl;

#include "clock.h"

Clock::Clock()             // constructor
   : time( 0 ) 
{ cout << "clock created" << endl; }

Clock::~Clock()            // destructor
{ cout << "clock destroyed" << endl; }

void Clock::tick()         // increment time by 1
{ time++; }

int Clock::getTime() const // return current time
{ return time; }

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
