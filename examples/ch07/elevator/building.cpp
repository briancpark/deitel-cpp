// building.cpp
// Member function definitions for class Building.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "building.h"

Building::Building() // constructor
   : floor1( Floor::FLOOR1, elevator ), 
     floor2( Floor::FLOOR2, elevator ),
     elevator( floor1, floor2 ), 
     scheduler( floor1, floor2 )
{ cout << "building created" << endl; }

Building::~Building() // destructor
{ cout << "building destroyed" << endl; }

// control the simulation
void Building::runSimulation( int totalTime )
{
   int currentTime = 0;

   while ( currentTime < totalTime ) {
      clock.tick();                     
      currentTime = clock.getTime();    
      cout << "TIME: " << currentTime << endl;      
      scheduler.processTime( currentTime );
      elevator.processTime( currentTime );
      cin.get(); // stop each second for user to view output 
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
