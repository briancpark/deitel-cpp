// Fig. 3.10: fig03_10.cpp
// Craps
#include <iostream>

using std::cout;
using std::endl;

#include <cstdlib>

#include <ctime>

using std::time;

int rollDice( void );  // function prototype

int main()
{
   enum Status { CONTINUE, WON, LOST };
   int sum, myPoint;
   Status gameStatus;

   srand( time( 0 ) );
   sum = rollDice();            // first roll of the dice

   switch ( sum ) {
      case 7: 
	  case 11:                  // win on first roll
         gameStatus = WON;
         break;
      case 2: 
	   case 3: 
	   case 12:                 // lose on first roll
         gameStatus = LOST;
         break;
      default:                 // remember point
         gameStatus = CONTINUE;
         myPoint = sum;
         cout << "Point is " << myPoint << endl;
         break;                // optional   
   }

   while ( gameStatus == CONTINUE ) {    // keep rolling
      sum = rollDice();

      if ( sum == myPoint )       // win by making point
         gameStatus = WON;
      else
         if ( sum == 7 )          // lose by rolling 7
            gameStatus = LOST;
   }

   if ( gameStatus == WON )
      cout << "Player wins" << endl;
   else
      cout << "Player loses" << endl;

   return 0;
}

int rollDice( void )
{
   int die1, die2, workSum;

   die1 = 1 + rand() % 6;
   die2 = 1 + rand() % 6;
   workSum = die1 + die2;
   cout << "Player rolled " << die1 << " + " << die2
        << " = " << workSum << endl;

   return workSum;
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
