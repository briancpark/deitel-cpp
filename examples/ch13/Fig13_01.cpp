// Fig. 13.1: fig13_01.cpp
// A simple exception handling example.
// Checking for a divide-by-zero exception.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Class DivideByZeroException to be used in exception 
// handling for throwing an exception on a division by zero.
class DivideByZeroException {
public:
   DivideByZeroException() 
      : message( "attempted to divide by zero" ) { }
   const char *what() const { return message; }
private:
   const char *message;
};

// Definition of function quotient. Demonstrates throwing 
// an exception when a divide-by-zero exception is encountered.
double quotient( int numerator, int denominator )
{
   if ( denominator == 0 )
      throw DivideByZeroException();

   return static_cast< double > ( numerator ) / denominator;
}

// Driver program
int main()
{
   int number1, number2;
   double result;

   cout << "Enter two integers (end-of-file to end): ";

   while ( cin >> number1 >> number2 ) {
   
      // the try block wraps the code that may throw an 
      // exception and the code that should not execute
      // if an exception occurs
      try {   
         result = quotient( number1, number2 );
         cout << "The quotient is: " << result << endl;
      }
      catch ( DivideByZeroException ex ) { // exception handler
         cout << "Exception occurred: " << ex.what() << '\n';
      }

      cout << "\nEnter two integers (end-of-file to end): ";
   }

   cout << endl;
   return 0;      // terminate normally
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
