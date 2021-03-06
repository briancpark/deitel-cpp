// elevator.cpp
// Member function definitions for class Elevator.
#include <iostream>

using std::cout;
using std::endl;

#include "elevator.h"
#include "person.h"
#include "floor.h"

const int Elevator::ELEVATOR_TRAVEL_TIME = 5;
const int Elevator::UP = 0;
const int Elevator::DOWN = 1;

// constructor
Elevator::Elevator( Floor &firstFloor, Floor &secondFloor )
   : elevatorButton( *this ), currentBuildingClockTime( 0 ), 
     moving( false ), direction( UP ), 
     currentFloor( Floor::FLOOR1 ), arrivalTime( 0 ), 
     floor1NeedsService( false ), floor2NeedsService( false ),
     floor1Ref( firstFloor ), floor2Ref( secondFloor ), 
     passengerPtr( 0 )
{ cout << "elevator created" << endl; }

Elevator::~Elevator() // destructor
{ cout << "elevator destroyed" << endl; }

// give time to elevator
void Elevator::processTime( int time )
{
   currentBuildingClockTime = time;

   if ( moving )
      processPossibleArrival();
   else
      processPossibleDeparture();

   if ( !moving )
      cout << "elevator at rest on floor " 
           << currentFloor << endl;
}

// when elevator is moving, determine if it should stop
void Elevator::processPossibleArrival()
{
   // if elevator arrives at destination floor
   if ( currentBuildingClockTime == arrivalTime ) {
      
      currentFloor =   // update current floor
         ( currentFloor == Floor::FLOOR1 ? 
           Floor::FLOOR2 : Floor::FLOOR1 );  

      direction =      // update direction
         ( currentFloor == Floor::FLOOR1 ? UP : DOWN );
        
      cout << "elevator arrives on floor " 
           << currentFloor << endl;
      
      arriveAtFloor( currentFloor == Floor::FLOOR1 ? 
            floor1Ref : floor2Ref );

      return;
   }

   // elevator is moving
   cout << "elevator moving " 
        << ( direction == UP ? "up" : "down" ) << endl;
}

// determine if elevator should move
void Elevator::processPossibleDeparture()
{
   // this floor needs service?
   bool currentFloorNeedsService =
      currentFloor == Floor::FLOOR1 ? 
         floor1NeedsService : floor2NeedsService;

   // other floor needs service?
   bool otherFloorNeedsService =
      currentFloor == Floor::FLOOR1 ? 
         floor2NeedsService : floor1NeedsService;

   // service this floor (if needed)
   if ( currentFloorNeedsService ) {
      arriveAtFloor( currentFloor == Floor::FLOOR1 ? 
         floor1Ref : floor2Ref );

      return;
   }

   // service other floor (if needed)
   else prepareToLeave( otherFloorNeedsService );    
}

// arrive at a particular floor
void Elevator::arriveAtFloor( Floor& arrivalFloor )
{
   moving = false;   // reset state

   cout << "elevator resets its button" << endl;
   elevatorButton.resetButton();
 
   bell.ringBell();
   
   // notify floor that elevator has arrived
   Person *floorPersonPtr = arrivalFloor.elevatorArrived();

   door.openDoor( passengerPtr, floorPersonPtr, 
                  arrivalFloor, *this );

   // this floor needs service?
   bool currentFloorNeedsService =              
      currentFloor == Floor::FLOOR1 ? 
         floor1NeedsService : floor2NeedsService;

   // other floor needs service?
   bool otherFloorNeedsService =
      currentFloor == Floor::FLOOR1 ? 
         floor2NeedsService : floor1NeedsService;

   // if this floor does not need service
   // prepare to leave for the other floor
   if ( !currentFloorNeedsService )
      prepareToLeave( otherFloorNeedsService );
   else  // otherwise, reset service flag
      currentFloor == Floor::FLOOR1 ? 
         floor1NeedsService = false: floor2NeedsService = false;
}

// request service from elevator
void Elevator::summonElevator( int floor )
{
   // set appropriate servicing flag
   floor == Floor::FLOOR1 ? 
      floor1NeedsService = true : floor2NeedsService = true;
}

// accept a passenger
void Elevator::passengerEnters( Person * const personPtr )
{
   // board passenger
   passengerPtr = personPtr;

   cout << "person " << passengerPtr->getID() 
        << " enters elevator from floor " 
        << currentFloor << endl;
}

// notify elevator that passenger is exiting
void Elevator::passengerExits() { passengerPtr = 0; }

// prepare to leave a floor
void Elevator::prepareToLeave( bool leaving )
{
   Floor &thisFloor = 
      currentFloor == Floor::FLOOR1 ? floor1Ref : floor2Ref;

   // notify floor that elevator may be leaving
   thisFloor.elevatorLeaving();

   door.closeDoor( thisFloor );          
   
   if ( leaving )  // leave, if necessary
      move();
}

void Elevator::move() // go to a particular floor
{
   moving = true;  // change state

   // schedule arrival time
   arrivalTime = currentBuildingClockTime + 
      ELEVATOR_TRAVEL_TIME;

   cout << "elevator begins moving " 
        << ( direction == DOWN ? "down " : "up ")
        << "to floor "
        << ( direction == DOWN ? '1' : '2' )
        << " (arrives at time " << arrivalTime << ')'
        << endl;
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
