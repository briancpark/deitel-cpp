// Fig. 15.12: queue.h
// Queue class template definition
// Derived from class List
#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

template< class QUEUETYPE >
class Queue: private List< QUEUETYPE > {
public:
   void enqueue( const QUEUETYPE &d ) { insertAtBack( d ); }
   bool dequeue( QUEUETYPE &d ) 
      { return removeFromFront( d ); }
   bool isQueueEmpty() const { return isEmpty(); }
   void printQueue() const { print(); }
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
