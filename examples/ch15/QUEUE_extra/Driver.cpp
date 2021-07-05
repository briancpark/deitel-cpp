// Queue test program
#include <iostream>
#include "queue.h"

using std::endl;

int main()
{
   Queue<int> intQueue;

   cout << "Inserting integers on intQueue" << endl;

   for ( int i = 0; i < 5; i++ ) {
      intQueue.enqueue( i );   // put items in the queue
      cout << i << ' ';
   }

   cout << endl;

   intQueue.print();          // output the queue contents

   cout << endl << "Deleting integers from intQueue" << endl;

   while ( !intQueue.isEmpty() )
      cout << intQueue.dequeue() << ' ';   // remove items

   cout << endl;
   intQueue.print();          // output the queue contents

   Queue<char> charQueue;

   cout << endl << endl
        << "Inserting characters on charQueue" << endl;

   for ( char c = 'A'; c < 'E'; c++ ) {
      charQueue.enqueue( c );   // put items in the queue
      cout << c << ' ';
   }

   cout << endl;

   charQueue.print();         // output the queue contents

   cout << endl << "Deleting characters from charQueue" << endl;

   while ( !charQueue.isEmpty() )
      cout << charQueue.dequeue() << ' ';   // remove items

   cout << endl;
   charQueue.print();         // output the queue contents

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
