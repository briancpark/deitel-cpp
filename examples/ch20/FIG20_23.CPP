// Fig. 20.23: fig20_23.cpp
// Testing Standard Library class stack
#include <iostream>

using std::cout;
using std::endl;

#include <stack>
#include <vector>
#include <list>

template< class T >
void popElements( T &s );

int main()
{
   std::stack< int > intDequeStack;   // deque-based stack
   std::stack< int, std::vector< int > > intVectorStack;
   std::stack< int, std::list< int > > intListStack;

   for ( int i = 0; i < 10; ++i ) {
      intDequeStack.push( i );
      intVectorStack.push( i );
      intListStack.push( i );
   }

   cout << "Popping from intDequeStack: ";
   popElements( intDequeStack );
   cout << "\nPopping from intVectorStack: ";
   popElements( intVectorStack );
   cout << "\nPopping from intListStack: ";
   popElements( intListStack );

   cout << endl;
   return 0;
}

template< class T >
void popElements( T &s )
{
   while ( !s.empty() ) {
      cout << s.top() << ' ';
      s.pop();
   }
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
