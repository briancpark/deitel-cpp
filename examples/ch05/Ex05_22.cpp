// ex05_22.cpp
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int mystery2( const char * );

int main()
{
   char string[ 80 ];

   cout << "Enter a string: ";
   cin >> string;
   cout << mystery2( string ) << endl;
   return 0;
}

int mystery2( const char *s ) 
{
   int x;

   for ( x = 0; *s != '\0'; s++ )
      ++x;

   return x;
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
