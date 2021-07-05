// Fig. 5.14: fig05_14.cpp
// Attempting to modify a constant pointer to
// constant data.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   int x = 5, y;

   const int *const ptr = &x; // ptr is a constant pointer to a
                              // constant integer. ptr always 
                              // points to the same location 
                              // and the integer at that 
                              // location cannot be modified.
   cout << *ptr << endl;
   *ptr = 7;
   ptr = &y;

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
