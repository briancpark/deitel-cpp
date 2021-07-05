// Fig. 3.8: fig03_08.cpp
// Roll a six-sided die 6000 times
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>

int main()
{
   int frequency1 = 0, frequency2 = 0,
       frequency3 = 0, frequency4 = 0,
       frequency5 = 0, frequency6 = 0,
       face;

   for ( int roll = 1; roll <= 6000; roll++ ) {
      face = 1 + rand() % 6;

      switch ( face ) {
         case 1:
            ++frequency1;
            break;
         case 2:
            ++frequency2;
            break;
         case 3:
            ++frequency3;
            break;
         case 4:
            ++frequency4;
            break;
         case 5:
            ++frequency5;
            break;
         case 6:
            ++frequency6;
            break;
         default:
            cout << "should never get here!";
      }
   }

   cout << "Face" << setw( 13 ) << "Frequency"
        << "\n   1" << setw( 13 ) << frequency1
        << "\n   2" << setw( 13 ) << frequency2
        << "\n   3" << setw( 13 ) << frequency3
        << "\n   4" << setw( 13 ) << frequency4
        << "\n   5" << setw( 13 ) << frequency5
        << "\n   6" << setw( 13 ) << frequency6 << endl;

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
