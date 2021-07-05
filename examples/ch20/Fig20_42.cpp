// Fig. 20.42: fig20_42.cpp
// Demonstrating function objects.
#include <iostream>

using std::cout;
using std::endl;

#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>

// binary function adds the square of its second argument and
// the running total in its first argument and 
// returns the sum
int sumSquares( int total, int value ) 
   { return total + value * value; }

// binary function class template which defines an overloaded 
// operator() that adds the square of its second 
// argument and the running total in its first argument and 
// returns the sum
template< class T > 
class SumSquaresClass : public std::binary_function< T, T, T >
{
public:
   const T operator()( const T &total, const T &value )
      { return total + value * value; }
};

int main()
{
   const int SIZE = 10;
   int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   std::vector< int > v( a1, a1 + SIZE );
   std::ostream_iterator< int > output( cout, " " );
   int result = 0;

   cout << "vector v contains:\n";
   std::copy( v.begin(), v.end(), output );
   result = 
      std::accumulate( v.begin(), v.end(), 0, sumSquares );
   cout << "\n\nSum of squares of elements in vector v using "
        << "binary\nfunction sumSquares: " << result;

   result = std::accumulate( v.begin(), v.end(), 0, 
                             SumSquaresClass< int >() );
   cout << "\n\nSum of squares of elements in vector v using "
        << "binary\nfunction object of type " 
        << "SumSquaresClass< int >: " << result << endl;
   return 0;
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
