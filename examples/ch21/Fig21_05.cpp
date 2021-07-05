// Fig. 21.5: fig21_05.cpp
// Demonstrating namespaces.
#include <iostream>
using namespace std;  // use std namespace

int myInt = 98;       // global variable

namespace Example {
   const double PI = 3.14159;
   const double E = 2.71828; 
   int myInt = 8;
   void printValues();

   namespace Inner {   // nested namespace
      enum Years { FISCAL1 = 1990, FISCAL2, FISCAL3 };
   }
}

namespace {           // unnamed namespace
   double d = 88.22; 
}                     

int main()
{
   // output value d of unnamed namespace
   cout << "d = " << d;

   // output global variable
   cout << "\n(global) myInt = " << myInt;

   // output values of Example namespace
   cout << "\nPI = " << Example::PI << "\nE = "
        << Example::E << "\nmyInt = " 
        << Example::myInt << "\nFISCAL3 = "
        << Example::Inner::FISCAL3 << endl;

   Example::printValues();  // invoke printValues function

   return 0;
}

void Example::printValues() 
{
   cout << "\nIn printValues:\n" << "myInt = "
        << myInt << "\nPI = " << PI << "\nE = "
        << E << "\nd = " << d << "\n(global) myInt = "
        << ::myInt << "\nFISCAL3 = " 
        << Inner::FISCAL3 << endl;
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
