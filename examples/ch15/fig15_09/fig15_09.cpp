// Fig. 15.9: fig15_09.cpp
// Driver to test the template Stack class
#include <iostream>
#include "stack.h"

using std::endl;

int main()
{
   Stack< int > intStack;
   int popInteger, i;
   cout << "processing an integer Stack" << endl;

   for ( i = 0; i < 4; i++ ) {
      intStack.push( i );
      intStack.printStack();
   }

   while ( !intStack.isStackEmpty() ) {
      intStack.pop( popInteger );
      cout << popInteger << " popped from stack" << endl;
      intStack.printStack();
   }

   Stack< double > doubleStack;
   double val = 1.1, popdouble;
   cout << "processing a double Stack" << endl;

   for ( i = 0; i < 4; i++ ) {
      doubleStack.push( val );
      doubleStack.printStack();
      val += 1.1;
   }

   while ( !doubleStack.isStackEmpty() ) {
      doubleStack.pop( popdouble );
      cout << popdouble << " popped from stack" << endl;
      doubleStack.printStack();
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
