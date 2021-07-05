// elevator.h
// Definition for class Elevator.
#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "elevatorButton.h"
#include "door.h"
#include "bell.h"

class Floor;                        // forward declaration
class Person;                       // forward declaration

class Elevator {

public:
   Elevator( Floor &, Floor & );   // constructor
   ~Elevator();                    // destructor
   void summonElevator( int ); // request to service a  floor
   void prepareToLeave( bool );    // prepare to leave
   void processTime( int );        // give time to elevator
   void passengerEnters( Person * const ); // board a passenger
   void passengerExits();          // exit a passenger
   ElevatorButton elevatorButton;  // note public object

private:
   void processPossibleArrival();
   void processPossibleDeparture();
   void arriveAtFloor( Floor & );
   void move();

   // time to move between floors
   static const int ELEVATOR_TRAVEL_TIME; 
   static const int UP;            // UP direction
   static const int DOWN;          // DOWN direction

   int currentBuildingClockTime;   // current time
   bool moving;                    // elevator state
   int direction;                  // current direction
   int currentFloor;               // current location
   int arrivalTime;  // time to arrive at a floor
   bool floor1NeedsService; // floor1 service flag
   bool floor2NeedsService; // floor2 service flag

   Floor &floor1Ref;        // reference to floor1
   Floor &floor2Ref;        // reference to floor2
   Person *passengerPtr;    // pointer to current passenger
   
   Door door;               // door object
   Bell bell;               // bell object
};

#endif // ELEVATOR_H

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
