// Fig. 10.1: piece1.cpp
// Member function definitions for class PieceWorker
#include <iostream>

using std::cout;

#include "piece1.h"

// Constructor for class PieceWorker
PieceWorker::PieceWorker( const char *first, const char *last, 
                          double w, int q )
   : Employee( first, last )  // call base-class constructor
{
   setWage( w );
   setQuantity( q );
}

// Set the wage
void PieceWorker::setWage( double w ) 
   { wagePerPiece = w > 0 ? w : 0; }

// Set the number of items output
void PieceWorker::setQuantity( int q ) 
   { quantity = q > 0 ? q : 0; }

// Determine the PieceWorker's earnings
double PieceWorker::earnings() const
   { return quantity * wagePerPiece; }

// Print the PieceWorker's name 
void PieceWorker::print() const
{
   cout << "\n     Piece worker: ";
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
