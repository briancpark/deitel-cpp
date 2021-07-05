// Fig. 5.20: fig05_20.cpp
// Using subscripting and pointer notations with arrays

#include <iostream>

using std::cout;
using std::endl;

int main()
{
   int b[] = { 10, 20, 30, 40 }, i, offset;
   int *bPtr = b;   // set bPtr to point to array b

   cout << "Array b printed with:\n" 
        << "Array subscript notation\n";

   for ( i = 0; i < 4; i++ )
      cout << "b[" << i << "] = " << b[ i ] << '\n';


   cout << "\nPointer/offset notation where\n"
        << "the pointer is the array name\n";

   for ( offset = 0; offset < 4; offset++ )
      cout << "*(b + " << offset << ") = " 
           << *( b + offset ) << '\n';


   cout << "\nPointer subscript notation\n";

   for ( i = 0; i < 4; i++ )
      cout << "bPtr[" << i << "] = " << bPtr[ i ] << '\n';

   cout << "\nPointer/offset notation\n";

   for ( offset = 0; offset < 4; offset++ )
      cout << "*(bPtr + " << offset << ") = "
           << *( bPtr + offset ) << '\n';

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
