#include <iostream>
#include "Utils.h"
#include "Integer.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "10-Oct06 OOP244 NAA" << endl;
   Integer
      i = 5;

   cout << "i is: " << i << endl;

   cout << "Enter an Integer...\n> ";

//   operator>>( cin, i );
     cin >> i;
   
   
   //   operator<<( cout, i ) << endl;

   cout << "The Integer value is " 
      << i << " at this moment!" << endl;

   return 0;
}
