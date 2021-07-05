// Fig. 5.31: fig05_31.cpp
// Using strcat and strncat
#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

int main()
{
   char s1[ 20 ] = "Happy ";
   char s2[] = "New Year ";
   char s3[ 40 ] = "";

   cout << "s1 = " << s1 << "\ns2 = " << s2;
   cout << "\nstrcat(s1, s2) = " << strcat( s1, s2 );
   cout << "\nstrncat(s3, s1, 6) = " << strncat( s3, s1, 6 );
   cout << "\nstrcat(s3, s1) = " << strcat( s3, s1 ) << endl;

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
