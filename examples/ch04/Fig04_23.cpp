// Fig. 4.23: fig04_23.cpp
// Double-subscripted array example
#include <iostream>

using std::cout;
using std::endl;
using std::ios;

#include <iomanip>

using std::setw;
using std::setiosflags;
using std::setprecision;

const int students = 3;   // number of students
const int exams = 4;      // number of exams

int minimum( int [][ exams ], int, int );
int maximum(int [][ exams ], int, int );
double average( int [], int );
void printArray( int [][ exams ], int, int );

int main()
{
   int studentGrades[ students ][ exams ] = 
          { { 77, 68, 86, 73 },
            { 96, 87, 89, 78 },
            { 70, 90, 86, 81 } };

   cout << "The array is:\n";
   printArray( studentGrades, students, exams );
   cout << "\n\nLowest grade: "
        << minimum( studentGrades, students, exams ) 
        << "\nHighest grade: "
        << maximum( studentGrades, students, exams ) << '\n';

   for ( int person = 0; person < students; person++ )
      cout << "The average grade for student " << person << " is " 
           << setiosflags( ios::fixed | ios::showpoint ) 
           << setprecision( 2 ) 
           << average( studentGrades[ person ], exams ) << endl;

   return 0;
}

// Find the minimum grade
int minimum( int grades[][ exams ], int pupils, int tests )
{
   int lowGrade = 100;

   for ( int i = 0; i < pupils; i++ )

      for ( int j = 0; j < tests; j++ )

         if ( grades[ i ][ j ] < lowGrade )
            lowGrade = grades[ i ][ j ];

   return lowGrade;
}

// Find the maximum grade
int maximum( int grades[][ exams ], int pupils, int tests )
{
   int highGrade = 0;

   for ( int i = 0; i < pupils; i++ )

      for ( int j = 0; j < tests; j++ )

         if ( grades[ i ][ j ] > highGrade )
            highGrade = grades[ i ][ j ];

   return highGrade;
}

// Determine the average grade for a particular student
double average( int setOfGrades[], int tests )
{
   int total = 0;

   for ( int i = 0; i < tests; i++ )
      total += setOfGrades[ i ];

   return static_cast< double >( total ) / tests;
}

// Print the array
void printArray( int grades[][ exams ], int pupils, int tests ) 
{
   cout << "                 [0]  [1]  [2]  [3]";

   for ( int i = 0; i < pupils; i++ ) {
      cout << "\nstudentGrades[" << i << "] ";

      for ( int j = 0; j < tests; j++ )
         cout << setiosflags( ios::left ) << setw( 5 ) 
              << grades[ i ][ j ];
   }
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
