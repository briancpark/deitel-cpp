// Fig. 11.22: fig11_22.cpp 
// Left-justification and right-justification. 
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;
using std::setw;
using std::setiosflags;
using std::resetiosflags;

int main()
{
   int x = 12345;

   cout << "Default is right justified:\n"
        << setw(10) << x << "\n\nUSING MEMBER FUNCTIONS" 
        << "\nUse setf to set ios::left:\n" << setw(10);
   
   cout.setf( ios::left, ios::adjustfield );
   cout << x << "\nUse unsetf to restore default:\n";
   cout.unsetf( ios::left );
   cout << setw( 10 ) << x 
        << "\n\nUSING PARAMETERIZED STREAM MANIPULATORS"
        << "\nUse setiosflags to set ios::left:\n"
        << setw( 10 ) << setiosflags( ios::left ) << x 
        << "\nUse resetiosflags to restore default:\n"
        << setw( 10 ) << resetiosflags( ios::left ) 
        << x << endl;
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
