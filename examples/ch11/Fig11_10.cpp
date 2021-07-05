// Fig. 11.10: fig11_10.cpp 
// Avoiding a precedence problem between the stream-insertion 
// operator and the conditional operator.
// Need parentheses around the conditional expression.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int x, y;

   cout << "Enter two integers: ";
   cin >> x >> y;
   cout << x << ( x == y ? " is" : " is not" ) 
        << " equal to " << y << endl;

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
