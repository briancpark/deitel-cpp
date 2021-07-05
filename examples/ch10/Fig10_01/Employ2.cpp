// Fig. 10.1: employ2.cpp
// Member function definitions for
// abstract base class Employee.
// Note: No definitions given for pure virtual functions.
#include <iostream>

using std::cout;

#include <cstring>
#include <cassert>
#include "employ2.h"

// Constructor dynamically allocates space for the
// first and last name and uses strcpy to copy
// the first and last names into the object.
Employee::Employee( const char *first, const char *last )
{
   firstName = new char[ strlen( first ) + 1 ];
   assert( firstName != 0 );    // test that new worked
   strcpy( firstName, first );

   lastName = new char[ strlen( last ) + 1 ];
   assert( lastName != 0 );     // test that new worked
   strcpy( lastName, last );
}

// Destructor deallocates dynamically allocated memory
Employee::~Employee()
{
   delete [] firstName;
   delete [] lastName;
}

// Return a pointer to the first name
// Const return type prevents caller from modifying private 
// data. Caller should copy returned string before destructor 
// deletes dynamic storage to prevent undefined pointer.
const char *Employee::getFirstName() const 
{ 
   return firstName;   // caller must delete memory
}

// Return a pointer to the last name
// Const return type prevents caller from modifying private 
// data. Caller should copy returned string before destructor 
// deletes dynamic storage to prevent undefined pointer.
const char *Employee::getLastName() const
{
   return lastName;   // caller must delete memory
}

// Print the name of the Employee
void Employee::print() const
   { cout << firstName << ' ' << lastName; }


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
