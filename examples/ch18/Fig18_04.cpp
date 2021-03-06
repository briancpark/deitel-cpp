// Fig. 18.4: fig18_04.cpp
// Using the exit and atexit functions 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>

void print( void );

int main()
{
   atexit( print );       // register function print 
   cout << "Enter 1 to terminate program with function exit" 
        << "\nEnter 2 to terminate program normally\n";

   int answer;
   cin >> answer;

   if ( answer == 1 ) {
      cout << "\nTerminating program with function exit\n";
      exit( EXIT_SUCCESS );
   }

   cout << "\nTerminating program by reaching the end of main"
        << endl;

   return 0;
}

void print( void )
{
   cout << "Executing function print at program termination\n"
        << "Program terminated" << endl;
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
