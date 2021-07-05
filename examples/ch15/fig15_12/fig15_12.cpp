// Fig. 15.12: fig15_12.cpp
// Driver to test the template Queue class
#include <iostream>
#include "queue.h"

using std::endl;

int main()
{
   Queue< int > intQueue;
   int dequeueInteger, i;
   cout << "processing an integer Queue" << endl;

   for ( i = 0; i < 4; i++ ) {
      intQueue.enqueue( i );
      intQueue.printQueue();
   }

   while ( !intQueue.isQueueEmpty() ) {
      intQueue.dequeue( dequeueInteger );
      cout << dequeueInteger << " dequeued" << endl;
      intQueue.printQueue();
   }

   Queue< double > doubleQueue;
   double val = 1.1, dequeuedouble;

   cout << "processing a double Queue" << endl;

   for ( i = 0; i < 4; i++ ) {
      doubleQueue.enqueue( val );
      doubleQueue.printQueue();
      val += 1.1;
   }

   while ( !doubleQueue.isQueueEmpty() ) {
      doubleQueue.dequeue( dequeuedouble );
      cout << dequeuedouble << " dequeued" << endl;
      doubleQueue.printQueue();
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
