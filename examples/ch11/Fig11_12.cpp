// Fig. 11.12: fig11_12.cpp 
// Using member functions get, put and eof.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   char c;

   cout << "Before input, cin.eof() is " << cin.eof()
        << "\nEnter a sentence followed by end-of-file:\n";

   while ( ( c = cin.get() ) != EOF )
      cout.put( c );

   cout << "\nEOF in this system is: " << c;
   cout << "\nAfter input, cin.eof() is " << cin.eof() << endl;
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
