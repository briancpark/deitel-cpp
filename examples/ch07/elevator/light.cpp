// light.cpp
// Member function definitions for class Light.
#include <iostream>

using std::cout;
using std::endl;

#include "light.h"

Light::Light( const char *string ) // constructor
   : on( false ), name( string )
{ cout << name << " light created" << endl; }

Light::~Light() // destuctor
{ cout << name << " light destroyed" << endl; }

void Light::turnOn() // turn light on
{ 
   on = true; 
   cout << name << " turns on its light" << endl;
}

void Light::turnOff() // turn light off
{ 
   on = false; 
   cout << name << " turns off its light" << endl;
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
