// elevatorButton.cpp: 
// Member function definitions for class ElevatorButton.
#include <iostream>

using std::cout;
using std::endl;

#include "elevatorButton.h"
#include "elevator.h"

ElevatorButton::ElevatorButton( // constructor
   Elevator &elevatorHandle )
   : Button( elevatorHandle )
{ cout << "elevator button created" << endl; }

ElevatorButton::~ElevatorButton() // destructor
{ cout << "elevator button destroyed" << endl; }

void ElevatorButton::pressButton() // press the button
{
   Button::pressButton();
   cout << "elevator button tells elevator prepare to leave" 
        << endl;
   elevatorRef.prepareToLeave( true );
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

