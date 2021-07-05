// Fig. 19.2: fig19_02.cpp
// Demonstrating string comparison capabilities
#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main()
{
   string s1( "Testing the comparison functions." ),
          s2("Hello" ), s3( "stinger" ), z1( s2 );
   
   cout << "s1: " << s1 << "\ns2: " << s2
	     << "\ns3: " << s3 << "\nz1: " << z1 << "\n\n";

   // comparing s1 and z1
   if ( s1 == z1 )
      cout << "s1 == z1\n";
   else { // s1 != z1 
      if ( s1 > z1 )
         cout << "s1 > z1\n";
      else // s1 < z1
         cout << "s1 < z1\n";
   }

   // comparing s1 and s2
   int f = s1.compare( s2 );

   if ( f == 0)
      cout << "s1.compare( s2 ) == 0\n";
   else if ( f > 0 )
      cout << "s1.compare( s2 ) > 0\n";
   else  // f < 0
      cout << "s1.compare( s2 ) < 0\n";

   // comparing s1 (elements 2 - 5) and s3 (elements 0 - 5)
   f = s1.compare( 2, 5, s3, 0, 5 );

   if ( f == 0 )
      cout << "s1.compare( 2, 5, s3, 0, 5 ) == 0\n";
   else if ( f > 0 )
      cout << "s1.compare( 2, 5, s3, 0, 5 ) > 0\n";                
   else  // f < 0
      cout << "s1.compare( 2, 5, s3, 0, 5 ) < 0\n";

   // comparing s2 and z1
   f = z1.compare( 0, s2.size(), s2 );

   if ( f == 0 )
      cout << "z1.compare( 0, s2.size(), s2 ) == 0" << endl;
   else if ( f > 0 )
      cout << "z1.compare( 0, s2.size(), s2 ) > 0" << endl;
   else  // f < 0
      cout << "z1.compare( 0, s2.size(), s2 ) < 0" << endl;

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
