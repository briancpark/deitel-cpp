// Fig. 19.7: fig19_07.cpp
// Demonstrating functions erase and replace
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main()
{
   // compiler concatenates all parts into one string
   string s( "The values in any left subtree"
             "\nare less than the value in the"
             "\nparent node and the values in"
             "\nany right subtree are greater"
             "\nthan the value in the parent node" );
   
   // remove all characters from location 62 
   // through the end of s
   s.erase( 62 );

   // output the new string
   cout << "Original string after erase:\n" << s 
        << "\n\nAfter first replacement:\n";
             
   // replace all spaces with a period
   int x = s.find( " " );
   while ( x < string::npos ) {
      s.replace( x, 1, "." );
      x = s.find( " ", x + 1 );
   }
    
   cout << s << "\n\nAfter second replacement:\n";
   
   // replace all periods with two semicolons
   // NOTE: this will overwrite characters
   x = s.find( "." );
   while ( x < string::npos ) {
      s.replace( x, 2, "xxxxx;;yyy", 5, 2 );
      x = s.find( ".", x + 1 );
   }

   cout << s << endl;
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
