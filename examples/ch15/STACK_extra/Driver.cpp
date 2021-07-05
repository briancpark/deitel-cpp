// Stack test program
#include <iostream>
#include "stack.h"

using std::endl;

int main()
{
   Stack<int> intStack;

   cout << "Pushing integers on intStack" << endl;

   for ( int i = 0; i < 5; i++ ) {
      intStack.push( i );       // put items in the stack
      cout << i << ' ';
   }

   cout << endl;

   intStack.print();          // output the stack contents

   cout << endl << "Popping integers from intStack" << endl;

   while ( !intStack.isEmpty() )
      cout << intStack.pop() << ' ';   // remove items

   cout << endl;
   intStack.print();          // output the stack contents

   Stack<char> charStack;

   cout << endl << endl
        << "Pushing characters on charStack" << endl;

   for ( char c = 'A'; c < 'E'; c++ ) {
      charStack.push( c );      // put items in the stack
      cout << c << ' ';
   }

   cout << endl;

   charStack.print();         // output the stack contents

   cout << endl << "Popping characters from charStack" << endl;

   while ( !charStack.isEmpty() )
      cout << charStack.pop() << ' ';   // remove items

   cout << endl;
   charStack.print();         // output the stack contents

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
