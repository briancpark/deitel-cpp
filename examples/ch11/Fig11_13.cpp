// Fig. 11.13: fig11_13.cpp 
// Contrasting input of a string with cin and cin.get.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   const int SIZE = 80;
   char buffer1[ SIZE ], buffer2[ SIZE ];

   cout << "Enter a sentence:\n";
   cin >> buffer1;
   cout << "\nThe string read with cin was:\n"
        << buffer1 << "\n\n";
 
   cin.get( buffer2, SIZE );
   cout << "The string read with cin.get was:\n" 
        << buffer2 << endl;

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
