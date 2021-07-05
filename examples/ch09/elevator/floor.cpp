// floor.cpp
// Member function definitions for class Floor.
#include <iostream>

using std::cout;
using std::endl;

//#include <cstring>
#include "floor.h"
#include "person.h"
#include "elevator.h"

const int Floor::FLOOR1 = 1;
const int Floor::FLOOR2 = 2;

// constructor
Floor::Floor(int number, Elevator &elevatorHandle ) 
   : floorButton( number, elevatorHandle ), 
     floorNumber( number ), elevatorRef( elevatorHandle ),
     occupantPtr ( 0 ),
     light( floorNumber == 1 ? "floor 1" : "floor 2" )     
{ cout << "floor " << floorNumber << " created" << endl; }

Floor::~Floor() // destructor
{ cout << "floor " << floorNumber << " destroyed" << endl; }

// determine if floor is occupied
bool Floor::isOccupied() const 
{ return ( occupantPtr != 0 ); }

// return this floor's number
int Floor::getNumber() const { return floorNumber; }

// pass person to floor
void Floor::personArrives( Person * const personPtr )
{ occupantPtr = personPtr; }

// notify floor that elevator has arrived
Person *Floor::elevatorArrived()
{
   // reset the button on floor, if necessary
   cout << "floor " << floorNumber 
        << " resets its button" << endl;
   floorButton.resetButton();
      
   light.turnOn();

   return occupantPtr;
}

// tell floor that elevator is leaving
void Floor::elevatorLeaving() { light.turnOff(); }

// notifies floor that person is leaving
void Floor::personBoardingElevator() { occupantPtr = 0; }

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
