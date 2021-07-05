// Fig. 10.1: commis1.cpp
// Member function definitions for class CommissionWorker
#include <iostream>

using std::cout;

#include "commis1.h"

// Constructor for class CommissionWorker
CommissionWorker::CommissionWorker( const char *first,
        const char *last, double s, double c, int q )
   : Employee( first, last )  // call base-class constructor
{
   setSalary( s );
   setCommission( c );
   setQuantity( q );
}

// Set CommissionWorker's weekly base salary
void CommissionWorker::setSalary( double s ) 
   { salary = s > 0 ? s : 0; }

// Set CommissionWorker's commission
void CommissionWorker::setCommission( double c )
   { commission = c > 0 ? c : 0; }

// Set CommissionWorker's quantity sold
void CommissionWorker::setQuantity( int q )
   { quantity = q > 0 ? q : 0; }

// Determine CommissionWorker's earnings
double CommissionWorker::earnings() const
   { return salary + commission * quantity; }

// Print the CommissionWorker's name 
void CommissionWorker::print() const
{
   cout << "\nCommission worker: ";
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
