
#include <iostream>
#include "Name.h"
using namespace std;
using namespace seneca;

int main( ) {
   cout << "Welcome OOP244 NAA - 05,Jan23" << endl;
   Name* names = nullptr;
   size_t num{};
   cout << "how many names?\n> ";
   cin >> num;
   names = new Name[num];
   for ( size_t i = 0; i < num; i++ ) {
      names[i].init( );
   }
   names[0].print(  );
   for ( size_t i = 0; i < num; i++ ) {
      names[i].read( );
   }
 //  names[0].m_givenName = nullptr;
   for ( size_t i = 0; i < num; i++ ) {
      names[i].print( );
   }
   for ( size_t i = 0; i < num; i++ ) {
      names[i].finalize( );
   }
   delete[] names;
   return 0;
}






