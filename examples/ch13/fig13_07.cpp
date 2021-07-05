// Fig. 13.7: fig13_07.cpp
// Demonstrating auto_ptr
#include <iostream>

using std::cout;
using std::endl;

#include <memory>

using std::auto_ptr;

class Integer {
public:
   Integer( int i = 0 ) : value( i ) 
      { cout << "Constructor for Integer " << value << endl; } 
   ~Integer()  
      { cout << "Destructor for Integer " << value << endl; } 
   void setInteger( int i ) { value = i; }
   int getInteger() const { return value; }
private:
   int value;
};

int main()
{
   cout << "Creating an auto_ptr object that points "
        << "to an Integer\n";

   auto_ptr< Integer > ptrToInteger( new Integer( 7 ) );

   cout << "Using the auto_ptr to manipulate the Integer\n";
   ptrToInteger->setInteger( 99 );  
   cout << "Integer after setInteger: " 
        << ( *ptrToInteger ).getInteger()
        << "\nTerminating program" << endl;

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
