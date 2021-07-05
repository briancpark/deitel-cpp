// bell.cpp
// Member function definitions for class Bell.
#include <iostream>

using std::cout;
using std::endl;

#include "bell.h"

Bell::Bell() // constructor
{ cout << "bell created" << endl; }

Bell::~Bell() // destructor
{ cout << "bell destroyed" << endl; }

void Bell::ringBell() const // ring bell
{ cout << "elevator rings its bell" << endl; }

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
