// Fig. 4.13: fig04_13.cpp
// Static arrays are initialized to zero
#include <iostream>

using std::cout;
using std::endl;

void staticArrayInit( void );
void automaticArrayInit( void );

int main()
{
   cout << "First call to each function:\n";
   staticArrayInit();
   automaticArrayInit();

   cout << "\n\nSecond call to each function:\n";
   staticArrayInit();
   automaticArrayInit();
   cout << endl;

   return 0;
}

// function to demonstrate a static local array
void staticArrayInit( void )
{
   static int array1[ 3 ];
   int i;

   cout << "\nValues on entering staticArrayInit:\n";

   for ( i = 0; i < 3; i++ )
      cout << "array1[" << i << "] = " << array1[ i ] << "  ";

   cout << "\nValues on exiting staticArrayInit:\n";

   for ( i = 0; i < 3; i++ )
      cout << "array1[" << i << "] = " 
           << ( array1[ i ] += 5 ) << "  ";
}

// function to demonstrate an automatic local array
void automaticArrayInit( void )
{
   int i, array2[ 3 ] = { 1, 2, 3 };

   cout << "\n\nValues on entering automaticArrayInit:\n";

   for ( i = 0; i < 3; i++ )
      cout << "array2[" << i << "] = " << array2[ i ] << "  ";

   cout << "\nValues on exiting automaticArrayInit:\n";

   for ( i = 0; i < 3; i++ )
      cout << "array2[" << i << "] = " 
           << ( array2[ i ] += 5 ) << "  ";
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
