// Fig. 6.10: fig06_10.cpp
// Demonstrating the Time class set and get functions
#include <iostream>

using std::cout;
using std::endl;

#include "time3.h"

void incrementMinutes( Time &, const int );

int main()
{
   Time t;

   t.setHour( 17 );
   t.setMinute( 34 );
   t.setSecond( 25 );

   cout << "Result of setting all valid values:\n" 
        << "  Hour: " << t.getHour()
        << "  Minute: " << t.getMinute()
        << "  Second: " << t.getSecond();

   t.setHour( 234 );    // invalid hour set to 0
   t.setMinute( 43 );
   t.setSecond( 6373 ); // invalid second set to 0

   cout << "\n\nResult of attempting to set invalid hour and"
        << " second:\n  Hour: " << t.getHour()
        << "  Minute: " << t.getMinute()
        << "  Second: " << t.getSecond() << "\n\n";

   t.setTime( 11, 58, 0 );
   incrementMinutes( t, 3 );

   return 0;
}

void incrementMinutes(Time &tt, const int count)
{
   cout << "Incrementing minute " << count
        << " times:\nStart time: ";
   tt.printStandard();

   for ( int i = 0; i < count; i++ ) {
      tt.setMinute( ( tt.getMinute() + 1 ) % 60);

      if ( tt.getMinute() == 0 )
         tt.setHour( ( tt.getHour() + 1 ) % 24);

      cout << "\nminute + 1: ";
      tt.printStandard();
   }

   cout << endl;
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
