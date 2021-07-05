// Fig. 5.30: fig05_30.cpp
// Using strcpy and strncpy
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

int main()
{
   char x[] = "Happy Birthday to You";
   char y[ 25 ], z[ 15 ];

   cout << "The string in array x is: " << x
        << "\nThe string in array y is: " << strcpy( y, x )
        << '\n';
   strncpy( z, x, 14 );  // does not copy null character
   z[ 14 ] = '\0';
   cout << "The string in array z is: " << z << endl;

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
