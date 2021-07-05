// Fig. 7.7: fig07_07.cpp  
// Using the this pointer to refer to object members.
#include <iostream>

using std::cout;
using std::endl;

class Test {
public:
   Test( int = 0 );             // default constructor
   void print() const;
private:
   int x;
};

Test::Test( int a ) { x = a; }  // constructor

void Test::print() const   // ( ) around *this required
{
   cout << "        x = " << x
        << "\n  this->x = " << this->x
        << "\n(*this).x = " << ( *this ).x << endl;
}

int main()
{
   Test testObject( 12 );

   testObject.print();

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
