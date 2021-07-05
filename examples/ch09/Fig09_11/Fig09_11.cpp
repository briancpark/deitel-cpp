// Fig. 9.11: fig09_11.cpp
// Driver for multiple inheritance example
#include <iostream>

using std::cout;
using std::endl;

#include "base1.h"
#include "base2.h"
#include "derived.h"

int main()
{
   Base1 b1( 10 ), *base1Ptr = 0;  // create Base1 object
   Base2 b2( 'Z' ), *base2Ptr = 0; // create Base2 object
   Derived d( 7, 'A', 3.5 );       // create Derived object

   // print data members of base class objects
   cout << "Object b1 contains integer " << b1.getData() 
        << "\nObject b2 contains character " << b2.getData()
        << "\nObject d contains:\n" << d << "\n\n";

   // print data members of derived class object
   // scope resolution operator resolves getData ambiguity
   cout << "Data members of Derived can be"
        << " accessed individually:"
        << "\n    Integer: " << d.Base1::getData()
        << "\n  Character: " << d.Base2::getData()
        << "\nReal number: " << d.getReal() << "\n\n";

   cout << "Derived can be treated as an "
        << "object of either base class:\n";

   // treat Derived as a Base1 object
   base1Ptr = &d;
   cout << "base1Ptr->getData() yields "
        << base1Ptr->getData() << '\n';

   // treat Derived as a Base2 object
   base2Ptr = &d;
   cout << "base2Ptr->getData() yields "
        << base2Ptr->getData() << endl;

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
