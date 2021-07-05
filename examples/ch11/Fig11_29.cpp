// Fig. 11.29: fig11_29.cpp 
// Testing error states.
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
   int x;
   cout << "Before a bad input operation:"
        << "\ncin.rdstate(): " << cin.rdstate() 
        << "\n    cin.eof(): " << cin.eof()     
        << "\n   cin.fail(): " << cin.fail()    
        << "\n    cin.bad(): " << cin.bad()     
        << "\n   cin.good(): " << cin.good()    
        << "\n\nExpects an integer, but enter a character: ";
   cin >> x;

   cout << "\nAfter a bad input operation:" 
        << "\ncin.rdstate(): " << cin.rdstate() 
        << "\n    cin.eof(): " << cin.eof()     
        << "\n   cin.fail(): " << cin.fail()   
        << "\n    cin.bad(): " << cin.bad()   
        << "\n   cin.good(): " << cin.good() << "\n\n";  

   cin.clear();
  
   cout << "After cin.clear()" 
        << "\ncin.fail(): " << cin.fail()             
        << "\ncin.good(): " << cin.good() << endl;    
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
