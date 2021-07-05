// Fig. 20.5: fig20_05.cpp
// Demonstrating input and output with iterators.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iterator>

int main()
{
   cout << "Enter two integers: ";

   std::istream_iterator< int > inputInt( cin );
   int number1, number2;

   number1 = *inputInt;  // read first int from standard input
   ++inputInt;           // move iterator to next input value
   number2 = *inputInt;  // read next int from standard input

   cout << "The sum is: ";

   std::ostream_iterator< int > outputInt( cout );

   *outputInt = number1 + number2;  // output result to cout
   cout << endl;
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
