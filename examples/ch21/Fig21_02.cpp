// Fig. 21.2: fig21_02.cpp
// Demonstrating the static_cast operator.
#include <iostream>

using std::cout;
using std::endl;

class BaseClass {
public:
   void f( void ) const { cout << "BASE\n"; }
};

class DerivedClass: public BaseClass {
public:
   void f( void ) const { cout << "DERIVED\n"; }
};

void test( BaseClass * );

int main()
{ 
   // use static_cast for a conversion
   double d = 8.22;
   int x = static_cast< int >( d );
 
   cout << "d is " << d << "\nx is " << x << endl;

   BaseClass * basePtr = new DerivedClass;  
   test( basePtr );   // call test
   delete basePtr;

   return 0;
}
 
void test( BaseClass * basePtr )
{
   DerivedClass *derivedPtr;

   // cast base class pointer into derived class pointer    
   derivedPtr = static_cast< DerivedClass * >( basePtr );
   derivedPtr->f();   // invoke DerivedClass function f
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
