// Fig. 3.12: fig03_12.cpp
// A scoping example
#include <iostream>

using std::cout;
using std::endl;

void a( void );   // function prototype
void b( void );   // function prototype
void c( void );   // function prototype

int x = 1;      // global variable

int main()
{
   int x = 5;   // local variable to main

   cout << "local x in outer scope of main is " << x << endl;

   {            // start new scope
      int x = 7;

      cout << "local x in inner scope of main is " << x << endl;
   }            // end new scope

   cout << "local x in outer scope of main is " << x << endl;

   a();         // a has automatic local x
   b();         // b has static local x
   c();         // c uses global x
   a();         // a reinitializes automatic local x
   b();         // static local x retains its previous value
   c();         // global x also retains its value

   cout << "local x in main is " << x << endl;

   return 0;
}

void a( void )
{
   int x = 25;  // initialized each time a is called

   cout << endl << "local x in a is " << x 
        << " after entering a" << endl;
   ++x;
   cout << "local x in a is " << x 
        << " before exiting a" << endl;
}

void b( void )
{
    static int x = 50;  // Static initialization only
                        // first time b is called.
    cout << endl << "local static x is " << x 
         << " on entering b" << endl;
    ++x;
    cout << "local static x is " << x 
         << " on exiting b" << endl;
}

void c( void )
{
   cout << endl << "global x is " << x 
        << " on entering c" << endl;
   x *= 10;
   cout << "global x is " << x << " on exiting c" << endl;
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
