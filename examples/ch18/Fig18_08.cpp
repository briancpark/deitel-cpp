// Fig. 18.8: fig18_08.cpp
// An example of a union 
#include <iostream>

using std::cout;
using std::endl;

union Number {
   int x;
   double y;
};

int main()
{
   Number value;
	
   value.x = 100;
   cout << "Put a value in the integer member\n"
        << "and print both members.\nint:   " 
        << value.x << "\ndouble: " << value.y << "\n\n";
	
   value.y = 100.0;
   cout << "Put a value in the floating member\n" 
        << "and print both members.\nint:   " 
        << value.x << "\ndouble: " << value.y << endl;
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
