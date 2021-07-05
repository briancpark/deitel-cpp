// Fig. 6.12: fig06_12.cpp 
// Demonstrating that class objects can be assigned
// to each other using default memberwise copy
#include <iostream>

using std::cout;
using std::endl;

// Simple Date class
class Date {
public:
   Date( int = 1, int = 1, int = 1990 ); // default constructor
   void print();
private:
   int month;
   int day;
   int year;
};

// Simple Date constructor with no range checking
Date::Date( int m, int d, int y )
{
   month = m;
   day = d;
   year = y;
}

// Print the Date in the form mm-dd-yyyy
void Date::print() 
   { cout << month << '-' << day << '-' << year; }

int main()
{
   Date date1( 7, 4, 1993 ), date2;  // d2 defaults to 1/1/90

   cout << "date1 = ";
   date1.print();
   cout << "\ndate2 = ";
   date2.print();

   date2 = date1;   // assignment by default memberwise copy
   cout << "\n\nAfter default memberwise copy, date2 = ";
   date2.print();
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
