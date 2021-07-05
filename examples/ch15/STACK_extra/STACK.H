// STACK.H
// Definition of class Stack
#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cassert>
#include "stacknd.h"

using std::cout;

template <class T>
class Stack {
public:
   Stack();              // default constructor
   ~Stack();             // destructor
   void push( T & );     // insert item in stack
   T pop();              // remove item from stack
   int isEmpty() const;  // is the stack empty?
   void print() const;   // output the stack
private:
   StackNode<T> *topPtr;    // pointer to fist StackNode
};

// Member function definitions for class Stack
template <class T>
Stack<T>::Stack() { topPtr = 0; }

template <class T>
Stack<T>::~Stack()
{
   StackNode<T> *tempPtr, *currentPtr = topPtr;

   while ( currentPtr != 0 ) {
      tempPtr = currentPtr;
      currentPtr = currentPtr->nextPtr;
      delete tempPtr;
   }
}

template <class T>
void Stack<T>::push( T &d )
{
   StackNode<T> *newPtr = new StackNode<T>( d, topPtr );

   assert( newPtr != 0 );  // was memory allocated?
   topPtr = newPtr;
}

template <class T>
T Stack<T>::pop()
{
   assert( !isEmpty() );

   StackNode<T> *tempPtr = topPtr;

   topPtr = topPtr->nextPtr;
   T poppedValue = tempPtr->data;
   delete tempPtr;
   return poppedValue;
}

template <class T>
int Stack<T>::isEmpty() const { return topPtr == 0; }

template <class T>
void Stack<T>::print() const
{
   StackNode<T> *currentPtr = topPtr;

   if ( isEmpty() )          // Stack is empty
      cout << "Stack is empty" << endl;
   else {                    // Stack is not empty
      cout << "The stack is:" << endl;

      while ( currentPtr != 0 ) {
         cout << currentPtr->data << ' ';
         currentPtr = currentPtr->nextPtr;
      }

      cout << endl;
   }
}

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
