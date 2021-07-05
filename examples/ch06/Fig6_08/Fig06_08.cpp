// Fig. 6.8: fig06_08.cpp 
// Demonstrating a default constructor
// function for class Time.
#include <iostream>

using std::cout;
using std::endl;

#include "time2.h"

int main()
{
   Time t1,             // all arguments defaulted
        t2(2),          // minute and second defaulted
        t3(21, 34),     // second defaulted 
        t4(12, 25, 42), // all values specified
        t5(27, 74, 99); // all bad values specified

   cout << "Constructed with:\n"
        << "all arguments defaulted:\n   ";
   t1.printMilitary();
   cout << "\n   ";
   t1.printStandard();

   cout << "\nhour specified; minute and second defaulted:" 
        << "\n   ";
   t2.printMilitary();
   cout << "\n   ";
   t2.printStandard();

   cout << "\nhour and minute specified; second defaulted:" 
        << "\n   ";
   t3.printMilitary();
   cout << "\n   ";
   t3.printStandard();

   cout << "\nhour, minute, and second specified:" 
        << "\n   ";
   t4.printMilitary();
   cout << "\n   ";
   t4.printStandard();

   cout << "\nall invalid values specified:" 
        << "\n   ";
   t5.printMilitary();
   cout << "\n   ";
   t5.printStandard();
   cout << endl;

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
