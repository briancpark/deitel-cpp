// floorButton.cpp
// Member function definitions for class FloorButton.
#include <iostream>

using std::cout;
using std::endl;

#include "floorButton.h"
#include "elevator.h"

// constructor
FloorButton::FloorButton( const int number, 
                          Elevator &elevatorHandle  )
   : floorNumber( number ), pressed( false ), 
     elevatorRef( elevatorHandle ) 
{ 
   cout << "floor " << floorNumber << " button created" 
        << endl; 
}

FloorButton::~FloorButton() // destructor
{
   cout << "floor " << floorNumber << " button destroyed"
        << endl;
}

// press the button
void FloorButton::pressButton()
{
   pressed = true;
   cout << "floor " << floorNumber 
        << " button summons elevator" << endl;
   elevatorRef.summonElevator( floorNumber );
}

// reset the button
void FloorButton::resetButton() 
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

