// Fig. 18.6: fig18_06.cpp
// Using signal handling 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

#include <csignal>
#include <cstdlib>
#include <ctime>

void signal_handler( int );

int main()
{
   signal( SIGINT, signal_handler );
   srand( time( 0 ) );
   
   for ( int i = 1; i < 101; i++ ) {
      int x = 1 + rand() % 50;
      
      if ( x == 25 )
         raise( SIGINT );
         
      cout << setw( 4 ) << i;

      if ( i % 10 == 0 )
         cout << endl;
   }

   return 0;
}

void signal_handler( int signalValue )
{
   cout << "\nInterrupt signal (" << signalValue
        << ") received.\n"
        << "Do you wish to continue (1 = yes or 2 = no)? ";

   int response;
   cin >> response;

   while ( response != 1 && response != 2 ) {
      cout << "(1 = yes or 2 = no)? ";
      cin >> response;
   }
   
   if ( response == 1 )
      signal( SIGINT, signal_handler );
   else
      exit( EXIT_SUCCESS );
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
