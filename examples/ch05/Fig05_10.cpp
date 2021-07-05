// Fig. 5.10: fig05_10.cpp
// Converting lowercase letters to uppercase letters
// using a non-constant pointer to non-constant data
#include <iostream>

using std::cout;
using std::endl;

#include <cctype>

void convertToUppercase( char * );

int main()
{
   char string[] = "characters and $32.98";

   cout << "The string before conversion is: " << string;
   convertToUppercase( string );
   cout << "\nThe string after conversion is:  " 
        << string << endl;
   return 0;
}

void convertToUppercase( char *sPtr )
{
   while ( *sPtr != '\0' ) {

      if ( islower( *sPtr ) )
         *sPtr = toupper( *sPtr );  // convert to uppercase

      ++sPtr;  // move sPtr to the next character
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
