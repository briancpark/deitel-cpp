// Fig. 4.8: fig04_08.cpp
// Compute the sum of the elements of the array
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   const int arraySize = 12;
   int a[ arraySize ] = { 1, 3, 5, 4, 7, 2, 99, 
                          16, 45, 67, 89, 45 };
   int total = 0;

   for ( int i = 0; i < arraySize; i++ )
      total += a[ i ];
   
   cout << "Total of array element values is " << total << endl;
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
