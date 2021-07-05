// Fig. 15.3: fig15_03.cpp
// List class test
#include <iostream>
#include "list.h"

using std::cin;
using std::endl;

// Function to test an integer List
template< class T >
void testList( List< T > &listObject, const char *type )
{
   cout << "Testing a List of " << type << " values\n";

   instructions();
   int choice;
   T value;

   do {
      cout << "? ";
      cin >> choice;

      switch ( choice ) {
         case 1:
            cout << "Enter " << type << ": ";
            cin >> value;
            listObject.insertAtFront( value );
            listObject.print();
            break;
         case 2:
            cout << "Enter " << type << ": ";
            cin >> value;
            listObject.insertAtBack( value );
            listObject.print();
            break;
         case 3:
            if ( listObject.removeFromFront( value ) )
               cout << value << " removed from list\n";

            listObject.print();
            break;
         case 4:
            if ( listObject.removeFromBack( value ) )
               cout << value << " removed from list\n";

            listObject.print();
            break;
      }
   } while ( choice != 5 );

   cout << "End list test\n\n";
}

void instructions()
{
   cout << "Enter one of the following:\n"
        << "  1 to insert at beginning of list\n" 
        << "  2 to insert at end of list\n" 
        << "  3 to delete from beginning of list\n" 
        << "  4 to delete from end of list\n" 
        << "  5 to end list processing\n";
}

int main()
{
   List< int > integerList;
   testList( integerList, "integer" ); // test integerList

   List< double > doubleList;
   testList( doubleList, "double" );     // test doubleList

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
