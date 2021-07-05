// Fig. 20.30: fig20_30.cpp
// Examples of mathematical algorithms in the Standard Library.
#include <iostream>

using std::cout;
using std::endl;

#include <algorithm>
#include <numeric>     // accumulate is defined here
#include <vector>

bool greater9( int );
void outputSquare( int );
int calculateCube( int );

int main()
{
   const int SIZE = 10;
   int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   std::vector< int > v( a1, a1 + SIZE );
   std::ostream_iterator< int > output( cout, " " );

   cout << "Vector v before random_shuffle: ";
   std::copy( v.begin(), v.end(), output );
   std::random_shuffle( v.begin(), v.end() );
   cout << "\nVector v after random_shuffle: ";
   std::copy( v.begin(), v.end(), output );

   int a2[] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
   std::vector< int > v2( a2, a2 + SIZE );
   cout << "\n\nVector v2 contains: ";
   std::copy( v2.begin(), v2.end(), output );
   int result = std::count( v2.begin(), v2.end(), 8 );
   std::cout << "\nNumber of elements matching 8: " << result;
 
   result = std::count_if( v2.begin(), v2.end(), greater9 );
   cout << "\nNumber of elements greater than 9: " << result;

   cout << "\n\nMinimum element in Vector v2 is: "
        << *( std::min_element( v2.begin(), v2.end() ) );

   cout << "\nMaximum element in Vector v2 is: "
        << *( std::max_element( v2.begin(), v2.end() ) );

   cout << "\n\nThe total of the elements in Vector v is: "
        << std::accumulate( v.begin(), v.end(), 0 );

   cout << "\n\nThe square of every integer in Vector v is:\n";
   std::for_each( v.begin(), v.end(), outputSquare );

   std::vector< int > cubes( SIZE );
   std::transform( v.begin(), v.end(), cubes.begin(),
                   calculateCube );
   cout << "\n\nThe cube of every integer in Vector v is:\n";
   std::copy( cubes.begin(), cubes.end(), output );

   cout << endl;
   return 0;
}

bool greater9( int value ) { return value > 9; }

void outputSquare( int value ) { cout << value * value << ' '; }

int calculateCube( int value ) { return value * value * value; }

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
