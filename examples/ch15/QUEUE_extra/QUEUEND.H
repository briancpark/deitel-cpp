// QUEUEND.H
// Definition of template class QueueNode
#ifndef QUEUEND_H
#define QUEUEND_H

template<class T> class Queue; // forward declaration

template <class T>
class QueueNode {
   friend class Queue<T>;
public:
   QueueNode( const T & = 0 );
   T getData() const;
private:
   T data;
   QueueNode *nextPtr;
};

// Member function definitions for class QueueNode
template <class T>
QueueNode<T>::QueueNode( const T &d )
{
   data = d;
   nextPtr = 0;
}

template <class T>
T QueueNode<T>::getData() const { return data; }

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
