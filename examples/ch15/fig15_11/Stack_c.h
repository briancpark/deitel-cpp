// Fig. 15.11: stack_c.h
// Definition of Stack class composed of List object
#ifndef STACK_C
#define STACK_C
#include "list.h"

template< class STACKTYPE >
class Stack {
public:
   // no constructor; List constructor does initialization
   void push( const STACKTYPE &d ) { s.insertAtFront( d ); }
   bool pop( STACKTYPE &d ) { return s.removeFromFront( d ); }
   bool isStackEmpty() const { return s.isEmpty(); }
   void printStack() const { s.print(); }
private:
   List< STACKTYPE > s;
};

#endif


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
