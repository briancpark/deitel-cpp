// Fig. 16.35: fig16_35.cpp
// Using memcpy
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

int main()
{
   char s1[ 17 ], s2[] = "Copy this string";

   memcpy( s1, s2, 17 );
   cout << "After s2 is copied into s1 with memcpy,\n"
        << "s1 contains \"" << s1 << '\"' << endl;
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
