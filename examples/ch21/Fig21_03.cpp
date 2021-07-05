// Fig. 21.3: fig21_03.cpp
// Demonstrating the const_cast operator. 
#include <iostream>

using std::cout;
using std::endl;
      
class ConstCastTest {
public:
   void setNumber( int );
   int getNumber() const;
   void printNumber() const;
private:
   int number;
};

void ConstCastTest::setNumber( int num ) { number = num; }

int ConstCastTest::getNumber() const { return number; }

void ConstCastTest::printNumber() const
{
   cout << "\nNumber after modification: ";
	
   // the expression number-- would generate compile error
   // undo const-ness to allow modification
   const_cast< ConstCastTest * >( this )->number--;

   cout << number << endl;
}

int main()
{
   ConstCastTest x;
   x.setNumber( 8 );  // set private data number to 8
   
   cout << "Initial value of number: " << x.getNumber();

   x.printNumber();
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
