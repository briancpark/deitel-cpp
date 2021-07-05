// Fig. 16.30: fig16_30.cpp
// Using strpbrk
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

int main()
{
   const char *string1 = "This is a test";
   const char *string2 = "beware";

   cout << "Of the characters in \"" << string2 << "\"\n'"
        << *strpbrk( string1, string2 ) << '\''
        << " is the first character to appear in\n\""
        << string1 << '\"' << endl;
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
