// door.cpp
// Member function definitions for class Door.
#include <iostream>

using std::cout;
using std::endl;

#include "door.h"
#include "person.h"
#include "floor.h"
#include "elevator.h"

Door::Door() // constructor
   : open( false ) 
{ cout << "door created" << endl; }

Door::~Door() // destructor
{ cout << "door destroyed" << endl; }

// open the door
void Door::openDoor( Person * const passengerPtr, 
                     Person * const nextPassengerPtr,
                     Floor &currentFloor, Elevator &elevator ) 
{ 
   if ( !open ) {
      open = true; 
   
      cout << "elevator opens its door on floor "
           << currentFloor.getNumber() << endl;

      if ( passengerPtr != 0 ) {
         passengerPtr->exitElevator( currentFloor, elevator );
         delete passengerPtr; // passenger leaves simulation
      }

      if ( nextPassengerPtr != 0 )
         nextPassengerPtr->enterElevator( 
            elevator, currentFloor );
   }
}

// close the door
void Door::closeDoor( const Floor &currentFloor ) 
{
   if ( open ) {
      open = false; 
      cout << "elevator closes its door on floor "
           << currentFloor.getNumber() << endl;
   }
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
