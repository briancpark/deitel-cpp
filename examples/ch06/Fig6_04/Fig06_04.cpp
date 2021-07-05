// Fig. 6.4: fig06_04.cpp
// Demonstrating the class member access operators . and ->
//
// CAUTION: IN FUTURE EXAMPLES WE AVOID PUBLIC DATA!
#include <iostream>

using std::cout;
using std::endl;

// Simple class Count
class Count {
public:
   int x;
   void print() { cout << x << endl; }
};

int main()
{
   Count counter,                // create counter object 
         *counterPtr = &counter, // pointer to counter
         &counterRef = counter;  // reference to counter

   cout << "Assign 7 to x and print using the object's name: ";
   counter.x = 7;       // assign 7 to data member x
   counter.print();     // call member function print

   cout << "Assign 8 to x and print using a reference: ";
   counterRef.x = 8;    // assign 8 to data member x
   counterRef.print();  // call member function print

   cout << "Assign 10 to x and print using a pointer: ";
   counterPtr->x = 10;  // assign 10 to data member x
   counterPtr->print(); // call member function print
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
