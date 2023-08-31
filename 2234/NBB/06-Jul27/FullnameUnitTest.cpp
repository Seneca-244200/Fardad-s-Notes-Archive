#include <iostream>
#include "Fullname.h"
using namespace std;
using namespace sdds;

Fullname getName( ) {
   Fullname name;
   cout << "Full Name please: ";
   cin >> name;
   return name;
}

int main( ) {
   clog.setstate( ios::failbit );
   Fullname N{ "Bart", "Simpson" };
   cout << "N: " << N << endl;
   N = getName( );
   cout << "Hello " << N << endl;
   return 0;
}
