// Fig. 11.21: fig11_21.cpp 
// Controlling the printing of trailing zeros and decimal 
// points for floating-point values.
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::ios;

#include <cmath>

int main()
{      
   cout << "Before setting the ios::showpoint flag\n"
        << "9.9900 prints as: " << 9.9900 
        << "\n9.9000 prints as: " << 9.9000
        << "\n9.0000 prints as: " << 9.0000
        << "\n\nAfter setting the ios::showpoint flag\n";
   cout.setf( ios::showpoint );
   cout << "9.9900 prints as: " << 9.9900 
        << "\n9.9000 prints as: " << 9.9000
        << "\n9.0000 prints as: " << 9.0000 << endl;
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
