// Fig. 5.28: fig05_28.cpp
// Demonstrating an array of pointers to functions
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void function1( int );
void function2( int );
void function3( int );

int main()
{
   void (*f[ 3 ])( int ) = { function1, function2, function3 };
   int choice;

   cout << "Enter a number between 0 and 2, 3 to end: ";
   cin >> choice;

   while ( choice >= 0 && choice < 3 ) {
      (*f[ choice ])( choice );
      cout << "Enter a number between 0 and 2, 3 to end: ";
      cin >> choice;
   }

   cout << "Program execution completed." << endl;
   return 0;
}

void function1( int a )
{
   cout << "You entered " << a 
        << " so function1 was called\n\n";
}

void function2( int b )
{
   cout << "You entered " << b 
        << " so function2 was called\n\n";
}

void function3( int c )
{
   cout << "You entered " << c 
        << " so function3 was called\n\n";
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
