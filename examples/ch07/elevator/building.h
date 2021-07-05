// building.h
// Definition for class Building.
#ifndef BUILDING_H
#define BUILDING_H

#include "elevator.h"
#include "floor.h"
#include "clock.h"
#include "scheduler.h"

class Building {

public:
   Building();                   // constructor
   ~Building();                  // destructor
   void runSimulation( int ); // run simulation for specified time

private:
   Floor floor1;                 // floor1 object
   Floor floor2;                 // floor2 object
   Elevator elevator;            // elevator object
   Clock clock;                  // clock object
   Scheduler scheduler;          // scheduler object
};

#endif // BUILDING_H

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
