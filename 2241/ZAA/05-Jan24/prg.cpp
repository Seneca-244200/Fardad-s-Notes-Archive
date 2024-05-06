#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;

int main( ) {
   cout << "Welcome to OOP244ZAA 05-Jan 24th." << endl;
   Name* n = nullptr;
   size_t noOfNames{};
   cout << "Please enter then number of names:\n> ";
   cin >> noOfNames;
   n = new Name[noOfNames];

   n[0].print( );
   if ( n ) {
      size_t i{};
      for ( ; i < noOfNames; i++ ) {
         cout << (i + 1) << "> ";
         n[i].read();
      }
      for ( i = 0; i < noOfNames; i++ ) {
         cout << (i + 1) << ": ";
         n[noOfNames - i - 1].print( );
      }
   }
   else {
      cout << "Memory allocation failed!" << endl;
   }

   delete[] n;
   n = nullptr;// not needed, just to force a habit!
   return 0;
}


