// Fig. 21.7: fig21_07.cpp
// Demonstrating dynamic_cast.
#include <iostream>

using std::cout;
using std::endl;

const double PI = 3.14159;

class Shape {
   public:
      virtual double area() const { return 0.0; }
};

class Circle: public Shape {
public:
   Circle( int r = 1 ) { radius = r; }

   virtual double area() const 
   { 
      return PI * radius * radius; 
   };
protected:
   int radius;
};

class Cylinder: public Circle {
public:
   Cylinder( int h = 1 ) { height = h; }

   virtual double area() const 
   {     
      return 2 * PI * radius * height + 
             2 * Circle::area();
   }
private:
   int height;
};

void outputShapeArea( const Shape * );    // prototype

int main()
{
   Circle circle;
   Cylinder cylinder;
   Shape *ptr = 0;

   outputShapeArea( &circle );    // output circle's area
   outputShapeArea( &cylinder );  // output cylinder's area
   outputShapeArea( ptr );        // attempt to output area
   return 0;
}

void outputShapeArea( const Shape *shapePtr )
{
   const Circle *circlePtr;
   const Cylinder *cylinderPtr;

   // cast Shape * to a Cylinder *
   cylinderPtr = dynamic_cast< const Cylinder * >( shapePtr );

   if ( cylinderPtr != 0 )  // if true, invoke area()
      cout << "Cylinder's area: " << shapePtr->area();  
   else {  // shapePtr does not refer to a cylinder
      
      // cast shapePtr to a Circle *
      circlePtr = dynamic_cast< const Circle * >( shapePtr );

      if ( circlePtr != 0 )  // if true, invoke area()
         cout << "Circle's area: " << circlePtr->area(); 
      else
         cout << "Neither a Circle nor a Cylinder.";
   }

   cout << endl;
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
