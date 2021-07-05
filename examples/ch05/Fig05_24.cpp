// Fig. 5.24: fig05_24.cpp
// Card shuffling dealing program
#include <iostream>

using std::cout;

#include <iomanip>
using std::ios;

using std::setw;
using std::setiosflags;

#include <cstdlib>
#include <ctime>

void shuffle( int [][ 13 ] );
void deal( const int [][ 13 ], const char *[], const char *[] );

int main()
{
   const char *suit[ 4 ] =  
      { "Hearts", "Diamonds", "Clubs", "Spades" };
   const char *face[ 13 ] = 
      { "Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King" };
   int deck[ 4 ][ 13 ] = { 0 };

   srand( time( 0 ) );

   shuffle( deck );
   deal( deck, face, suit );

   return 0;
}

void shuffle( int wDeck[][ 13 ] )
{
   int row, column;

   for ( int card = 1; card <= 52; card++ ) {
      do {
         row = rand() % 4;
         column = rand() % 13;
      } while( wDeck[ row ][ column ] != 0 );

      wDeck[ row ][ column ] = card;
   }
}

void deal( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[] )
{
   for ( int card = 1; card <= 52; card++ )

      for ( int row = 0; row <= 3; row++ )

         for ( int column = 0; column <= 12; column++ )

            if ( wDeck[ row ][ column ] == card )
               cout << setw( 5 ) << setiosflags( ios::right )
                    << wFace[ column ] << " of "
                    << setw( 8 ) << setiosflags( ios::left )
                    << wSuit[ row ] 
                    << ( card % 2 == 0 ? '\n' : '\t' );
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
