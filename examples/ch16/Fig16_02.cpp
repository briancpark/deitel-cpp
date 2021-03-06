// Fig. 16.2: fig16_02.cpp
// Card shuffling and dealing program using structures 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include <iomanip>

using std::setiosflags;
using std::setw;

#include <cstdlib>
#include <ctime>

struct Card {
   char *face;
   char *suit;
};

void fillDeck( Card * const, char *[], char *[] );
void shuffle( Card * const );
void deal( Card * const );

int main()
{
   Card deck[ 52 ];
   char *face[] = { "Ace", "Deuce", "Three", "Four", 
                    "Five", "Six", "Seven", "Eight", 
                    "Nine", "Ten", "Jack", "Queen", 
                    "King" };
   char *suit[] = { "Hearts", "Diamonds", 
                    "Clubs", "Spades" };

   srand( time( 0 ) );           // randomize 
   fillDeck( deck, face, suit );
   shuffle( deck );
   deal( deck );
   return 0;
}

void fillDeck( Card * const wDeck, char *wFace[], 
               char *wSuit[] )
{
   for ( int i = 0; i < 52; i++ ) {
      wDeck[ i ].face = wFace[ i % 13 ];
      wDeck[ i ].suit = wSuit[ i / 13 ];
   }
}

void shuffle( Card * const wDeck )
{
   for ( int i = 0; i < 52; i++ ) {
      int j = rand() % 52;
      Card temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   }
}

void deal( Card * const wDeck )
{
   for ( int i = 0; i < 52; i++ )
      cout << setiosflags( ios::right ) 
           << setw( 5 ) << wDeck[ i ].face << " of " 
           << setiosflags( ios::left ) 
           << setw( 8 ) << wDeck[ i ].suit 
           << ( ( i + 1 ) % 2 ? '\t' : '\n' );
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
