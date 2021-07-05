// Fig. 16.24: fig16_24.cpp
// Using strtod
#include <iostream>

using std::cout;
using std::endl;

#include <cstdlib>

int main()
{
   double d;
   const char *string = "51.2% are admitted";
   char *stringPtr;

   d = strtod( string, &stringPtr );
   cout << "The string \"" << string 
        << "\" is converted to the\ndouble value " << d 
        << " and the string \"" << stringPtr << "\"" << endl;
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
