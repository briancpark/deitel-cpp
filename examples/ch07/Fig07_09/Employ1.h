// Fig. 7.9: employ1.h
// An employee class
#ifndef EMPLOY1_H
#define EMPLOY1_H

class Employee {
public:
   Employee( const char*, const char* );  // constructor
   ~Employee();                       // destructor
   const char *getFirstName() const;  // return first name
   const char *getLastName() const;   // return last name

   // static member function
   static int getCount();  // return # objects instantiated

private:
   char *firstName;
   char *lastName;

   // static data member
   static int count;  // number of objects instantiated
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
