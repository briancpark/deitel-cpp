// button.cpp
// Member function definitions for class Button.
#include <iostream>

using std::cout;
using std::endl;

#include "button.h"

// constructor
Button::Button( Elevator &elevatorHandle )
   : elevatorRef( elevatorHandle ), pressed( false )
{ cout << "button created" << endl; }

Button::~Button() // destructor
{ cout << "button destroyed" << endl; }

void Button::pressButton() // press the button
{ pressed = true; }

void Button::resetButton() // reset the button
{ pressed = false; }

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
