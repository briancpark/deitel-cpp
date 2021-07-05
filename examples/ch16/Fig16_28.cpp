// Fig. 16.28: fig16_28.cpp
// Using strchr
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

int main()
{
   const char *string = "This is a test";
   char character1 = 'a', character2 = 'z';

   if ( strchr( string, character1 ) != NULL )
      cout << '\'' << character1 << "' was found in \""
           << string << "\".\n";
   else
      cout << '\'' << character1 << "' was not found in \""
           << string << "\".\n";

   if ( strchr( string, character2 ) != NULL )
      cout << '\'' << character2 << "' was found in \""
           << string << "\".\n";
   else
      cout << '\'' << character2 << "' was not found in \""
           << string << "\"." << endl;
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
