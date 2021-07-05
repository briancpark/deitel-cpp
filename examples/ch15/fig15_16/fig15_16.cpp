// Fig. 15.16: fig15_16.cpp
// Driver to test class Tree
#include <iostream>
#include <iomanip>
#include "tree.h"

using std::cout;
using std::cin;
using std::setiosflags;
using std::ios;
using std::setprecision;

int main()
{
   Tree< int > intTree;
   int intVal, i;

   cout << "Enter 10 integer values:\n";
   for( i = 0; i < 10; i++ ) {
      cin >> intVal;
      intTree.insertNode( intVal );
   }

   cout << "\nPreorder traversal\n";
   intTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   intTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   intTree.postOrderTraversal();

   Tree< double > doubleTree;
   double doubleVal;

   cout << "\n\n\nEnter 10 double values:\n"
        << setiosflags( ios::fixed | ios::showpoint )
        << setprecision( 1 );
   for ( i = 0; i < 10; i++ ) {
      cin >> doubleVal;
      doubleTree.insertNode( doubleVal );
   }

   cout << "\nPreorder traversal\n";
   doubleTree.preOrderTraversal();

   cout << "\nInorder traversal\n";
   doubleTree.inOrderTraversal();

   cout << "\nPostorder traversal\n";
   doubleTree.postOrderTraversal();

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
