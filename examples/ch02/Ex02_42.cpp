#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int x, y;

   cout << "Enter two integers in the range 1-20: ";
   cin >> x >> y;

   for ( int i = 1; i <= y; i++ ) {

      for ( int j = 1; j <= x; j++ )
         cout << '@';

      cout << endl;
   }

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
