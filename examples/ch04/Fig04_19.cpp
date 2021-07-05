// Fig. 4.19: fig04_19.cpp
// Linear search of an array
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int linearSearch( const int [], int, int );

int main()
{
   const int arraySize = 100;
   int a[ arraySize ], searchKey, element;

   for ( int x = 0; x < arraySize; x++ )  // create some data
      a[ x ] = 2 * x;

   cout << "Enter integer search key:" << endl;
   cin >> searchKey;
   element = linearSearch( a, searchKey, arraySize );

   if ( element != -1 )
      cout << "Found value in element " << element << endl;
   else
      cout << "Value not found" << endl;

   return 0;
}

int linearSearch( const int array[], int key, int sizeOfArray )
{
   for ( int n = 0; n < sizeOfArray; n++ )
      if ( array[ n ] == key )
         return n;

   return -1;
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
