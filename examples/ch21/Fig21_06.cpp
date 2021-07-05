// Fig. 21.6: fig21_06.cpp
// Demonstrating RTTI capability typeid.
#include <iostream>

using std::cout;
using std::endl;

#include <typeinfo>

template < typename T >
T maximum( T value1, T value2, T value3 )
{
   T max = value1;

   if ( value2 > max )
      max = value2;

   if ( value3 > max )
      max = value3;

   // get the name of the type (i.e., int or double)
   const char *dataType = typeid( T ).name();

   cout << dataType << "s were compared.\nLargest "
        << dataType << " is ";

   return max;
}

int main()
{
   int a = 8, b = 88, c = 22;
   double d = 95.96, e = 78.59, f = 83.89;

   cout << maximum( a, b, c ) << "\n";
   cout << maximum( d, e, f ) << endl;

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
