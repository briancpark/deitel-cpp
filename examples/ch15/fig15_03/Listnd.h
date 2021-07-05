// Fig. 15.3: listnd.h
// ListNode template definition
#ifndef LISTND_H
#define LISTND_H

template< class NODETYPE > class List;  // forward declaration

template<class NODETYPE>
class ListNode {
   friend class List< NODETYPE >; // make List a friend
public:
   ListNode( const NODETYPE & );  // constructor
   NODETYPE getData() const;      // return data in the node
private:
   NODETYPE data;                 // data
   ListNode< NODETYPE > *nextPtr; // next node in the list
};

// Constructor
template<class NODETYPE>
ListNode< NODETYPE >::ListNode( const NODETYPE &info )
   : data( info ), nextPtr( 0 ) { }

// Return a copy of the data in the node
template< class NODETYPE >
NODETYPE ListNode< NODETYPE >::getData() const { return data; }

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
