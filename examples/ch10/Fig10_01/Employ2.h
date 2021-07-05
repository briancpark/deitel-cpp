// Fig. 10.1: employ2.h
// Abstract base class Employee
#ifndef EMPLOY2_H
#define EMPLOY2_H

class Employee {
public:
   Employee( const char *, const char * );
   ~Employee();   // destructor reclaims memory
   const char *getFirstName() const;
   const char *getLastName() const;

   // Pure virtual function makes Employee abstract base class
   virtual double earnings() const = 0;   // pure virtual
   virtual void print() const;            // virtual
private:
   char *firstName;
   char *lastName;
};

#endif



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
