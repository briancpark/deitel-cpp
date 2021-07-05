// Fig. 11.16: fig11_16.cpp 
// Using hex, oct, dec and setbase stream manipulators.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::hex;
using std::dec;
using std::oct;
using std::setbase;

int main()
{
   int n;

   cout << "Enter a decimal number: ";
   cin >> n;

   cout << n << " in hexadecimal is: " 
        << hex << n << '\n'
        << dec << n << " in octal is: " 
        << oct << n << '\n'
        << setbase( 10 ) << n << " in decimal is: " 
        << n << endl;

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
