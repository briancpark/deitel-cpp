// Fig. 13.6: fig13_06.cpp
// Demonstrating set_new_handler
#include <iostream>

using std::cout;
using std::cerr;

#include <new>
#include <cstdlib>

using std::set_new_handler;

void customNewHandler()
{ 
   cerr << "customNewHandler was called"; 
   abort();
}
   
int main()
{
   double *ptr[ 50 ];
   set_new_handler( customNewHandler );
   
   for ( int i = 0; i < 50; i++ ) {
      ptr[ i ] = new double[ 5000000 ];
      
      cout << "Allocated 5000000 doubles in ptr[ " 
           << i << " ]\n";
   }
   
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
