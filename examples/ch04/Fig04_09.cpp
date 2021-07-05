// Fig. 4.9: fig04_09.cpp
// Student poll program
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
   const int responseSize = 40, frequencySize = 11;
   int responses[ responseSize ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8,
       10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
       5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
   int frequency[ frequencySize ] = { 0 };

   for ( int answer = 0; answer < responseSize; answer++ )
      ++frequency[ responses[answer] ];

   cout << "Rating" << setw( 17 ) << "Frequency" << endl;

   for ( int rating = 1; rating < frequencySize; rating++ )
      cout << setw( 6 ) << rating
           << setw( 17 ) << frequency[ rating ] << endl;

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
