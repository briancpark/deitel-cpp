// Fig. 19.6: fig19_06.cpp
// Demonstrating the string find functions
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main()
{
   // compiler concatenates all parts into one string literal
   string s( "The values in any left subtree"
             "\nare less than the value in the"
             "\nparent node and the values in"
             "\nany right subtree are greater"
             "\nthan the value in the parent node" );
   
   // find "subtree" at locations 23 and 102
   cout << "Original string:\n" << s 
        << "\n\n(find) \"subtree\" was found at: " 
        << s.find( "subtree" ) 
        << "\n(rfind) \"subtree\" was found at: " 
        << s.rfind( "subtree" );

   // find 'p' in parent at locations 62 and 144
   cout << "\n(find_first_of) character from \"qpxz\" at: " 
        << s.find_first_of( "qpxz" ) 
        << "\n(find_last_of) character from \"qpxz\" at: " 
        << s.find_last_of( "qpxz" );
   
   // find 'b' at location 25 
   cout << "\n(find_first_not_of) first character not\n"
        << "   contained in \"heTv lusinodrpayft\": " 
        << s.find_first_not_of( "heTv lusinodrpayft" );
   
   // find '\n' at location 121
   cout << "\n(find_last_not_of) first character not\n"
        << "   contained in \"heTv lusinodrpayft\": " 
        << s.find_last_not_of( "heTv lusinodrpayft" ) << endl;

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
