// Fig. 11.28: fig11_28.cpp 
// Demonstrating the flags member function.
#include <iostream>

using std::cout;
using std::endl;
using std::ios;


int main()
{
   int i = 1000;
   double d = 0.0947628;

   cout << "The value of the flags variable is: "
        << cout.flags()
        << "\nPrint int and double in original format:\n"
        << i << '\t' << d << "\n\n";
   long originalFormat =  
           cout.flags( ios::oct | ios::scientific );
   cout << "The value of the flags variable is: "
        << cout.flags()
        << "\nPrint int and double in a new format\n"
        << "specified using the flags member function:\n"
        << i << '\t' << d << "\n\n";
   cout.flags( originalFormat );
   cout << "The value of the flags variable is: "
        << cout.flags() 
        << "\nPrint values in original format again:\n"
        << i << '\t' << d << endl;
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
