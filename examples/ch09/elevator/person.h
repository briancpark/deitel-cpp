// person.h
// definition of class Person
#ifndef PERSON_H
#define PERSON_H

class Floor;                   // forward declaration
class Elevator;                // forward declaration

class Person {

public:
   Person( const int );        // constructor
   ~Person();                  // destructor
   int getID() const;          // returns person's ID

   void stepOntoFloor( Floor & );
   void enterElevator( Elevator &, Floor & ); 
   void exitElevator( const Floor &, Elevator & ) const; 

private:
   static int personCount;     // total number of persons
   const int ID;               // person's unique ID #
   const int destinationFloor; // destination floor #    
};

#endif // PERSON_H

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
