// Fig. 19.9: fig19_09.cpp
// Converting to C-style strings.
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main()
{
   string s( "STRINGS" );
   const char *ptr1 = 0;
   int len = s.length();
   char *ptr2 = new char[ len + 1 ]; // including null
   
   // copy characters out of string into allocated memory
   s.copy( ptr2, len, 0 );
   ptr2[ len ] = 0;  // add null terminator

   // output 
   cout << "string s is " << s 
        << "\ns converted to a C-Style string is "
        << s.c_str() << "\nptr1 is ";

   // Assign to pointer ptr1 the const char * returned by
   // function data(). NOTE: this is a potentially dangerous
   // assignment. If the string is modified, the pointer
   // ptr1 can become invalid.
   ptr1 = s.data();  
   
   for ( int k = 0; k < len; ++k )
      cout << *( ptr1 + k );   // use pointer arithmetic

   cout << "\nptr2 is " << ptr2 << endl;
   delete [] ptr2;
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
