// Fig. 21.16: fig21_16.cpp
// Using virtual base classes.
#include <iostream>

using std::cout;
using std::endl;

class Base {
public:
   // implicit default constructor
   
   virtual void print() const = 0; // pure virtual
};

class DerivedOne : virtual public Base {
public:
   // implicit default constructor calls
   // Base default constructor 

   // override print function
   void print() const { cout << "DerivedOne\n"; }
};

class DerivedTwo : virtual public Base {
public:
   // implicit default constructor calls
   // Base default constructor 

   // override print function
   void print() const { cout << "DerivedTwo\n"; }
};

class Multiple : public DerivedOne, public DerivedTwo {
public:
   // implicit default constructor calls
   // DerivedOne and DerivedTwo default constructors

   // qualify which version of function print
   void print() const { DerivedTwo::print(); }
};

int main()
{
   Multiple both;   // instantiate Multiple object
   DerivedOne one;  // instantiate DerivedOne object
   DerivedTwo two;  // instantiate DerivedTwo object

   Base *array[ 3 ];
   array[ 0 ] = &both;
   array[ 1 ] = &one;
   array[ 2 ] = &two;

   // polymorphically invoke print
   for ( int k = 0; k < 3; k++ )
      array[ k ] -> print();

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
