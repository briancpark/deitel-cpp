// Fig. 7.1: fig07_01.cpp
// Attempting to access a const object with
// non-const member functions.
#include "time5.h"

int main()
{
   Time wakeUp( 6, 45, 0 );       // non-constant object
   const Time noon( 12, 0, 0 );   // constant object

                          // MEMBER FUNCTION   OBJECT
   wakeUp.setHour( 18 );  // non-const         non-const

   noon.setHour( 12 );    // non-const         const

   wakeUp.getHour();      // const             non-const

   noon.getMinute();      // const             const
   noon.printMilitary();  // const             const
   noon.printStandard();  // non-const         const
   return 0;
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
