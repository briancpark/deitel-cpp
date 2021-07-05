// light.h
// Definition for class Light.
#ifndef LIGHT_H
#define LIGHT_H

class Light {

public:
   Light( const char * );  // constructor 
   ~Light();               // destructor
   void turnOn();          // turns light on
   void turnOff();         // turns light off

private:
   bool on;                // true if on; false if off
   const char *name;       // which floor the light is on
};

#endif // LIGHT_H

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
