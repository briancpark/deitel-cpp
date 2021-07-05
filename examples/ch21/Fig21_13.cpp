// Fig. 21.13 fig21_13.cpp
// Demonstrating operators .* and ->*
#include <iostream>

using std::cout;
using std::endl;

class Test {
public:
   void function() { cout << "function\n"; }
   int value;
};

void arrowStar( Test * );
void dotStar( Test * );

int main()
{
   Test t;    
  
   t.value = 8;
   arrowStar( &t );
   dotStar( &t );
   return 0; 
}

void arrowStar( Test *tPtr )
{
   void ( Test::*memPtr )() = &Test::function;
   ( tPtr->*memPtr )();  // invoke function indirectly
}

void dotStar( Test *tPtr )
{
   int Test::*vPtr = &Test::value;
   cout << ( *tPtr ).*vPtr << endl;  // access value   
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
