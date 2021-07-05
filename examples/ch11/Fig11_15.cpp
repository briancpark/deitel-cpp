// Fig. 11.15: fig11_15.cpp 
// Unformatted I/O with read, gcount and write.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   const int SIZE = 80;
   char buffer[ SIZE ];

   cout << "Enter a sentence:\n";
   cin.read( buffer, 20 );
   cout << "\nThe sentence entered was:\n";
   cout.write( buffer, cin.gcount() );
   cout << endl;
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
