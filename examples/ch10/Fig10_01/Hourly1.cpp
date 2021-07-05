// Fig. 10.1: hourly1.cpp
// Member function definitions for class HourlyWorker
#include <iostream>

using std::cout;

#include "hourly1.h"

// Constructor for class HourlyWorker
HourlyWorker::HourlyWorker( const char *first, 
                            const char *last,
                            double w, double h )
   : Employee( first, last )   // call base-class constructor
{
   setWage( w );
   setHours( h );
}

// Set the wage
void HourlyWorker::setWage( double w ) 
   { wage = w > 0 ? w : 0; }

// Set the hours worked
void HourlyWorker::setHours( double h )
   { hours = h >= 0 && h < 168 ? h : 0; }

// Get the HourlyWorker's pay
double HourlyWorker::earnings() const 
{ 
   if ( hours <= 40 ) // no overtime
      return wage * hours;
   else               // overtime is paid at wage * 1.5
      return 40 * wage + ( hours - 40 ) * wage * 1.5;
}

// Print the HourlyWorker's name 
void HourlyWorker::print() const
{
   cout << "\n    Hourly worker: ";
   Employee::print();
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
