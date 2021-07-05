// Fig. 16.31: fig16_31.cpp
// Using strrchr
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

int main()
{
   const char *string1 = "A zoo has many animals "
                         "including zebras";
   int c = 'z';

   cout << "The remainder of string1 beginning with the\n"
        << "last occurrence of character '" 
        << static_cast< char >( c )
        << "' is: \"" << strrchr( string1, c ) << '\"' << endl;
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
