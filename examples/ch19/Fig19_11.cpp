// Fig. 19.11: fig19_11.cpp
// Using a dynamically allocated ostringstream object.
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

#include <sstream>

using std::ostringstream;

int main()
{
   ostringstream outputString;
   string s1( "Output of several data types " ),
          s2( "to an ostringstream object:" ),
          s3( "\n        double: " ),
          s4( "\n           int: " ),
          s5( "\naddress of int: " );
   double d = 123.4567;
   int i = 22;

   outputString << s1 << s2 << s3 << d << s4 << i << s5 << &i;
   cout << "outputString contains:\n" << outputString.str();

   outputString << "\nmore characters added";
   cout << "\n\nafter additional stream insertions,\n"
        << "outputString contains:\n" << outputString.str() 
        << endl;

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
