// Definition of Queue class composed of List object
#ifndef QUEUE_C
#define QUEUE_C

#include "list.h"

template<class QUEUETYPE>
class Queue {
public:
   // no constructor; List constructor does initialization
   void enqueue( const QUEUETYPE & );
   int dequeue( QUEUETYPE & );
   int isQueueEmpty() const;
   void printQueue() const;
private:
   List<QUEUETYPE> q;
};

template<class QUEUETYPE>
void Queue<QUEUETYPE>::enqueue( const QUEUETYPE &value )
   { q.insertAtBack( value ); }

template<class QUEUETYPE>
int Queue<QUEUETYPE>::dequeue( QUEUETYPE &value )
   { return q.removeFromFront( value ); }

template<class QUEUETYPE>
int Queue<QUEUETYPE>::isQueueEmpty() const { return q.isEmpty(); }

template<class QUEUETYPE>
void Queue<QUEUETYPE>::printQueue() const { q.print(); }

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
